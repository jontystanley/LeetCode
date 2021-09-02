class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int mxsize=0;
        for(int i=0;i<nums.size();i++){
            int size=0;
            int idx=i;
            while(nums[idx]!=INT_MAX){
            int temp=nums[idx];
            nums[idx]=INT_MAX;
            idx=temp;
            size++;
            }
            mxsize=max(mxsize,size);
        }
        
        return mxsize;
    }
};