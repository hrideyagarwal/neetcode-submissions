class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> alphabet;
        for(int i=0;i<order.length();i++){
            alphabet[order[i]]=i;
        }
        for(int i=1;i<words.size();i++){
            string word1 = words[i-1];
            string word2=words[i];
            if(word1==word2) continue;
            int n= min(word1.size(),word2.size());
            bool foundDifference = false;
            for(int j=0;j<n;j++){
                if(alphabet[word1[j]]==alphabet[word2[j]]) continue;
                foundDifference = true;
                if(alphabet[word1[j]]>alphabet[word2[j]]) return false;
else break;
            }
if(!foundDifference && word1.size() > word2.size()) return false;

            
        }
        return true;

    }
};