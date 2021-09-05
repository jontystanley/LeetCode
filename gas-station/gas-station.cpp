class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curpref=0;
        int smpref=INT_MAX;
        int idx=-1;
        int totgas=0,totcost=0;
        for(int i=0;i<gas.size();i++){
            totgas+=gas[i];
            totcost+=cost[i];
            curpref+=gas[i]-cost[i];
            if(curpref<=smpref){
                smpref=curpref;
                idx=i;
            }
                
        }
        
        return (totcost>totgas)?-1:(idx+1)%gas.size();
    }
};