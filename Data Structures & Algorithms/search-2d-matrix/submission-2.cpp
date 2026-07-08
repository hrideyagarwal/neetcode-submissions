class Solution {
public:
int findrow(vector<vector<int>>& nums, int target){
       int l=0;
        int m=nums.size()-1;
        int row= -1;
        while(l<=m){
            int mid=(l+m)/2;
            if(nums[mid][0]<=target){
row=mid;
l=row+1;
            }
            else m=mid-1;
        }
        return row;
    }



    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row = findrow(matrix , target);
     if (row== -1 ) return false;
     int l=0;int r=matrix[0].size()-1;
     while(l<=r){
        int mid =( l+r)/2;
        if(matrix[row][mid]==target){
            return true;
        }
        else if(matrix[row][mid]<target){
            l=mid+1;
        }
        else r=mid-1;
     }
     return false;
    }
};
