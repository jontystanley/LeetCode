class Solution {
public:
    char slowestKey(vector<int>& nums, string s) {
        char mxch=s[0];
        int mxtime=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==mxtime){
                mxch=max(mxch,s[i]);
            }
            else if(nums[i]-nums[i-1]>mxtime){
                mxtime=nums[i]-nums[i-1];
                mxch=s[i];
            }
        }
        return mxch;
    }
};