class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int len=0;
        int fi=0,fj=0;
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;j++,i++){
                if(gap==0){
                    dp[i][j]=true;
                }else if(gap==1 && s[i]==s[j]){
                    dp[i][j]=true;
                }else if(s[i]==s[j] && dp[i+1][j-1]==true){
                    dp[i][j]=true;    
                }
                if(dp[i][j]==true){
                    fi=i;
                    fj=j;
                }
            }
        }
        return s.substr(fi,fj-fi+1);
    }
};