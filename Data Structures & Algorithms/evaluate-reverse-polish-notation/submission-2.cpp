class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens){
            if ( c=="+"|| c=="-" || c=="/" || c=="*"){
                int top1= st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                if(c=="+"){
                     st.push(top1+top2);
                }
                 else if(c=="-"){
                     st.push(top2 - top1 );
                }
                 else if(c=="*"){
                     st.push(top1*top2);
                }
                else{
                     st.push(top2/top1);
                }

            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
        
    }
};
