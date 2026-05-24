class Solution {
public:
    int helper(vector<int>& prices, int i, int bought, vector<vector<int>>& vv){
        //base case
        if(i>=prices.size()){
            return 0;
        }
        if(vv[i][bought]!=-1){
            return vv[i][bought];
        }
        //recursive code
        //1). buy it on ith day
        if(bought==false){
            int op1=0;
            int op2=0;
            op1=-prices[i]+helper(prices,i+1,true,vv);
            op2=helper(prices,i+1,false,vv);
            return vv[i][bought]=max(op1,op2);
        }
        else{
            int op1=0;
            int op2=0;
            op1=prices[i]+helper(prices,i+2,false,vv);
            op2=helper(prices,i+1,true,vv);
            return vv[i][bought]=max(op1,op2);
        }
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> vv(prices.size()+1,vector<int>(2,-1));
        return helper(prices,0,false,vv);
    }
};
