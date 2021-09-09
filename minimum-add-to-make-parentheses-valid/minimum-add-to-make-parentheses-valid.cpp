class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch=='('){
                st.push('(');
            }
            else{
                if(!st.empty() and st.top()=='('){
                    st.pop();
                }else{
                    st.push(')');
                }
            }
        }
        return st.size();
    }
};