class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int flag=0;
        int cprod=1;
        int mprod=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                cprod*=nums[i];
                mprod=max(mprod,cprod);
            }
            else{
                flag=1;
                cprod=1;
            }
        }
        
        cprod=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=0){
                cprod*=nums[i];
                mprod=max(mprod,cprod);
            }
            else{
                flag=1;
                cprod=1;
            }
        }
        return (flag==1 && 0>mprod)?0:mprod;
    }
};