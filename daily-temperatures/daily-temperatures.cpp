class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        stack<int>st;
        ans[n-1]=0;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && temperatures[i] >= temperatures[st.top()])
                st.pop();
            if(st.size()>0)
                ans[i]=st.top()-i;
            else 
                ans[i]=0;
            st.push(i);
        }
        return ans;
    }
};