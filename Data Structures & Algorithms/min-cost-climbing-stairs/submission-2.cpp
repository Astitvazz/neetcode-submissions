class Solution {
public:
    int helper(vector<int>& cost,int i,vector<int>& vv){
        //base case
        if(i>=cost.size()){
            return 0;
        }
        if(vv[i]!=-1){
            return vv[i];
        }
        //recursive code
        int op1=cost[i]+helper(cost,i+1,vv);
        int op2=cost[i]+helper(cost,i+2,vv);
        return vv[i]=min(op1,op2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> vv(cost.size()+1,-1);
        return min(helper(cost,0,vv),helper(cost,1,vv));
    }
};
