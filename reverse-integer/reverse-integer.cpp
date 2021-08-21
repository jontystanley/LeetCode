class Solution {
public:
    int reverse(int x) {
        long long rem=0,rev=0;
        while(x){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev<INT_MAX && rev>INT_MIN)
        return rev;
        else
            return 0;
        
    }
};