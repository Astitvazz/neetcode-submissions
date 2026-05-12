class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //desi method
        int res=0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]>prices[i]){
                    res=max(res,prices[j]-prices[i]);
                }
            }
        }
        return res;
    }
};
