class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset;

    void dfs(int index, vector<int>& nums) {
        if (index == nums.size()) {
            result.push_back(subset);
            return;
        }

        // Include nums[index]
        subset.push_back(nums[index]);
        dfs(index + 1, nums);

        // Exclude nums[index]
        subset.pop_back();
        dfs(index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0, nums);
        return result;
    }
};