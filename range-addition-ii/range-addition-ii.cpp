class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty())return m*n;
        int minrows=m;
        int mincols=n;
        for(int i=0;i<ops.size();i++)
        {
            minrows=min(minrows,ops[i][0]);        
            mincols=min(mincols,ops[i][1]);        
        }
        return (minrows*mincols);
    }
};