class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string &s, int k) {
        unordered_map<char,int>freq;
        int mxsize=0;
        for(int i=0,j=0;j<s.size();j++){
            freq[s[j]]++;
            while(freq.size()>k){
                freq[s[i]]--;
                if(freq[s[i]]==0) freq.erase(s[i]);
                i++;
            }
            mxsize=max(mxsize,j-i+1);
        }
        return mxsize;
