class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i<operations.size();i++){
if(operations[i]=="+" || operations[i]=="C" || operations[i]=="D"  ){
  if(operations[i]=="+" ){
    int top1 = st.top();
st.pop();
int top2 = st.top();
int ans = top1 + top2;

st.push(top1);
st.push(ans);

  }  
 else if(operations[i]=="D" ){
    int top = st.top();
    top*= 2;
    st.push(top);
   }
    else{
        st.pop();
    }

}

else{
    st.push(stoi(operations[i]));
}

        }
        int sum=0;
while(!st.empty()){
    sum+= st.top();
    st.pop();


}
return sum;
    }
};