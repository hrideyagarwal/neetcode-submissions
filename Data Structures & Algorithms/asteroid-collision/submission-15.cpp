class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> result;
        int i = 0;
        for(; i<asteroids.size();i++){
            if(asteroids[i]<0){
                bool destroyed = false;
                while(!s.empty() && s.top()>0){
                    if(abs(asteroids[i]) > s.top()){
                        s.pop();
                        continue;
                    } else if(abs(asteroids[i]) == s.top()){
                        s.pop();
                        destroyed = true;
                        break;
                    } else {
                        destroyed = true;
                        break;
                    }
                }
                if(!destroyed) s.push(asteroids[i]);
            } else{
                s.push(asteroids[i]);
            }
        }
        while(!s.empty()){
                result.push_back(s.top());
                s.pop();
            }
        reverse(result.begin(),result.end());
        return result;
    }
};