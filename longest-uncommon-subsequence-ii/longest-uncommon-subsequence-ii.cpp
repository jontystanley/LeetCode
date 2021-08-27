class Solution {
public:
    
    bool isSubSq(string a, string b){
        if(a.compare(b)==0)return true;
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j++])i++;
        }
        return (i==a.size());
    }
    
    
    int findLUSlength(vector<string>& strs) {
        int mxlen=-1;
        for(int i=0;i<strs.size();i++){
            bool flag=false;
            int curlen=strs[i].size();
            for(int j=0;j<strs.size();j++){
                if(i!=j && isSubSq(strs[i],strs[j]))flag=true;
            }
            if(!flag) mxlen=max(mxlen,curlen);
        }
        return mxlen;
    }
 
};