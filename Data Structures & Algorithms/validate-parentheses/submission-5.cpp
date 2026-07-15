class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true ;
stack<char> st;
for(int i=0;i<s.size();i++){

    if(s[i]=='{' || s[i]=='(' || s[i]=='[') st.push(s[i]);
  if(s[i]=='}'){
    if(st.empty() || st.top()!='{') return false;
    st.pop();
}
  if(s[i]==')'){
    if(st.empty() || st.top()!='(') return false;
    st.pop();
}
    if(s[i]==']'){
    if(st.empty() || st.top()!='[') return false;
    st.pop();
}

    
}
if(st.empty()) return true;
else return false;
    }
};
