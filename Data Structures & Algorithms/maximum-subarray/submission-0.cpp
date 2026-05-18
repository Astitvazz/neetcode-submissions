class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int summ=0;
            for(int j=i;j<nums.size();j++){
                summ=summ+nums[j];
                res=max(res,summ);
            }
        }
        return res;
    }
};
