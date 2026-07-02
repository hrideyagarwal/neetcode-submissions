class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> anagram;
        for(int i=0;i<s.size();i++){
            anagram[s[i]]++;
        }
        for(int i=t.size()-1;i>=0;i--){
            anagram[t[i]]--;
        }

        for(auto it : anagram){

    if(it.second != 0){
        return false;
    }
}
         return true;
        
    }
};
