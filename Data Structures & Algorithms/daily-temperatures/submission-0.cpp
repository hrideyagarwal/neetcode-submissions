class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> ans(n);
        for( int i=0; i<  temperatures.size(); i++ ){
if(st.empty()){
    st.push(i);
}
else{
    
    while(st.empty()==false && temperatures[i]>temperatures[st.top()]  )
    {
    ans[st.top()]=i - st.top();
    st.pop();
}

    
    st.push(i);

}
        }
        if(st.empty()==false){
            while(st.empty()==false){
                ans[st.top()]=0;
                st.pop();
            }
        }
        return ans;

    }
};
