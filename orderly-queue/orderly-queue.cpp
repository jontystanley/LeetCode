class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(begin(s),end(s));
            return s;
        }
        string mins=s;
        for(int i=1;i<s.size();i++){
            mins=min(mins,s.substr(i)+s.substr(0,i));
        }
        return mins;
    }
};