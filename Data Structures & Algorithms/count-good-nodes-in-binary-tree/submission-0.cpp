/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int nodes(TreeNode* root , int maxsofar){
     if(root==nullptr ) return 0;
        
        int count =0;
        if(root->val>=maxsofar ){
            count+=1;
            maxsofar=max(maxsofar,root->val);
        }

       count+= nodes(root->right , maxsofar);
               count+= nodes(root->left , maxsofar);
                return count;


}
    int goodNodes(TreeNode* root) {
        
       return nodes(root , INT_MIN);
      

    }
};
