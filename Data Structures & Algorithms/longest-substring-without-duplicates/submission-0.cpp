class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l=0;
        int r=0;
       int  maxlength=0;
        while(r<s.size()){
            if(set.find(s[r])!=set.end()){
                while(set.find(s[r])!=set.end()){
                    set.erase(s[l]);
                    l++;
                }}
                 set.insert(s[r]);
                maxlength=max(maxlength,r-l+1);
                r++;
            
        }
        return maxlength;
    }
};
