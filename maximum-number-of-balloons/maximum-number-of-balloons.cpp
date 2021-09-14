class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>u;
        for(char ch:text)
            if(ch=='b' || ch=='a' || ch=='l' || ch=='o' || ch=='n') u[ch]++;
        int min1=INT_MAX,min2=INT_MAX;
        for(char ch:text){
            if(ch=='b' || ch=='a' || ch=='n')  min1=min(min1,u[ch]);
            if(ch=='l' || ch=='o')  min2=min(min2,u[ch]/2);
        }
        if(min1==INT_MAX || min2==INT_MAX)return 0;
        else return min(min1,min2);
    }
};