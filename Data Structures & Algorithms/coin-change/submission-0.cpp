class Solution {
public:
    int helper(vector<int>& coins, int amount, int i){
        //base case
        if(amount==0){
            return 0;
        }
        if(i>=coins.size()||amount<0){
            return 1e9;
        }
        //recursive code
        int op1=1+helper(coins,amount-coins[i],i);
        int op2=helper(coins, amount,i+1);
        return min(op1,op2);
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans= helper(coins,amount,0);
        return (ans>=1e9)?-1:ans;
    }
};
