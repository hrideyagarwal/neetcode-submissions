class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int result =0;
     for(int num:nums){
        if(st.find(num-1)==st.end()) {
            int length = 1;
            int current =num;
            while (st.find(current+1)!=st.end()){
length++;
current++;

            }
            result=max(length,result);
        }
     }
     return result;
    }
};
