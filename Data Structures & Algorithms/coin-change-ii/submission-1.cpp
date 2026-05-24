class Solution {
public:
    int helper(int amount, vector<int>& coins, int i,vector<vector<int>>& vv){
        //base case
        if(amount==0){
            return 1;
        }
        if(i>=coins.size()||amount<0){
            return 0;
        }
        if(vv[amount][i]!=-1){
            return vv[amount][i];
        }
        //recursive code
        //1).don't take this coin at all
        int x=0;
        x=helper(amount,coins,i+1,vv);
        //2).take this coin
        int y=0;
        y=helper(amount-coins[i],coins,i,vv);
        return vv[amount][i]=x+y;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> vv(amount+1,vector<int>(coins.size()+1,-1));
        return helper(amount,coins,0,vv);
    }
};
