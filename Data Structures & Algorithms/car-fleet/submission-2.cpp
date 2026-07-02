class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        stack <double> st;
        int count=0;
        vector <pair<int,int>> vec;
        for(int i=0;i<n;i++){
            vec.push_back({position[i],speed[i]});
        }
        sort(vec.begin(),vec.end(),[] (pair<int,int> a , pair<int,int> b) {
            return a.first>b.first;
        });
           for(int i=0;i<n;i++){
            if(st.empty()){
                st.push((double)(target- vec[i].first)/vec[i].second);
            }
            else{
                if((double)(target- vec[i].first)/vec[i].second <= st.top()){
                    continue;
                }
                else st.push((double)(target- vec[i].first)/vec[i].second);


            }
          
            
           }
             while(st.empty()==false){
                st.pop();
count++;

            }
            return count;
    }
};
