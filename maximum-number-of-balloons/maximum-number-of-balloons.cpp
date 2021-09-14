class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>u;
        for(char ch:text)u[ch]++;
        return min({u['b'],u['a'],u['l']/2,u['o']/2,u['n']});
    }
};