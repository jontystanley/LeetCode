class Solution {
public:
    int numTrees(int n) {
        vector<int>dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++){
            int l=0;
            int r=i-1;
            while(l!=i && r!=-1){
                dp[i]+=dp[l++]*dp[r--];
            }
        }
        return dp[n];
    }
};