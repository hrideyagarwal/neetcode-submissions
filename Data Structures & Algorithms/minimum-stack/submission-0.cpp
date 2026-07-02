class MinStack {
      stack<int> st;
        stack<int> mins;
  public:
 
    
  
    void push(int val) {
        st.push(val);
        if(mins.empty()|| val<=mins.top()){
            mins.push(val);
        }
        else mins.push(mins.top());
    }
    
    void pop() {
        st.pop();
        mins.pop();
        
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
