class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int ans=0;
        while(r-l>1){
            int mid=r+(l-r)/2;
            if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        if(nums[l]>=target){
            return l;
        }
        if(nums[r]>=target){
            return r;
        }
        return nums.size();
    }
};