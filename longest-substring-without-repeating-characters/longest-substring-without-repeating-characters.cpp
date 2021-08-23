class Solution {
public:
    //acquire release strategy
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        unordered_map<char,int>m;
        int ans=0;
        for(int i=0,j=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()){
                j=max(j,m[s[i]]+1);
            }
            m[s[i]]=i;
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};