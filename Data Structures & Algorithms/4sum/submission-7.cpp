class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
for(int i=0 ; i< nums.size();i++){
    
    if(i>0 && nums[i]==nums[i-1]) continue;
    for(int j=i+1;j<nums.size();j++){
        int l = j+1;
    int r = nums.size()-1;
    if (j > i+1 && nums[j] == nums[j-1]) continue;
        while(l<r){
            long sum=(long)nums[i]+nums[j]+nums[r]+nums[l];
if(target>sum)l++;
else if(target<sum)r--;
else{ans.push_back({nums[i],nums[j],nums[r],nums[l]});
l++;r--;
while(l<r && nums[r]==nums[r+1])r--;
while(l<r && nums[l]==nums[l-1])l++;
}
        }

    }

}
    return ans;

    }
};