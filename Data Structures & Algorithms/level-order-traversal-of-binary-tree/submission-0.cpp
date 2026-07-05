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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result ;
        queue<TreeNode*> visit;
        if(root==nullptr ) return result;
        visit.push(root);
        while(!visit.empty()){
            int n=visit.size();
            vector<int> levels;


        for(int i=0;i<n;i++){
TreeNode* temp = visit.front();
visit.pop();
levels.push_back(temp->val);
if(temp->left!=nullptr) visit.push(temp->left);

if(temp->right!=nullptr) visit.push(temp->right);


        }
result.push_back(levels);
        }
        return result;
    }
};
