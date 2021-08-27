class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long loc=INT_MIN,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            loc=max((long long)nums[i],nums[i]+loc);
            ans=max(loc,ans);
        }
        return ans;
    }
};