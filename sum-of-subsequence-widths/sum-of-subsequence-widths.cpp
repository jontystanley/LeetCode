class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long ans=0, m=1e9+7,c=1;
        for(int i=0;i<nums.size();i++,c=c*2%m){
            ans=(ans+nums[i]*c-nums[n-i-1]*c)%m;
        }
        return (ans+m)%m;
    }
};