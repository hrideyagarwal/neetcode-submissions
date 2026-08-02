class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans =0;
        for(int i=0;i<details.size();i++){
            int x = (details[i][11] - '0') * 10;
            int y = (details[i][12] - '0');
            if( x+ y > 60) ans ++;
        }
        return ans;
    }
};