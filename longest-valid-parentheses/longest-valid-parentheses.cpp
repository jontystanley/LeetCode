class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.empty() || s.size()==1)return 0;
        stack<int>st;
        int mxlen=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(!st.empty() && s[st.top()]=='('){
                    st.pop();
                    mxlen=st.empty()?i+1:max(mxlen,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
        return mxlen;
    }
};