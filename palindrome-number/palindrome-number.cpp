class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x>0 && x%10==0))
            return false;
        long long rev=0,rem=0,temp=x;
        while(x){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==temp){
         return true;
        }
        else
            return false;
    }
};