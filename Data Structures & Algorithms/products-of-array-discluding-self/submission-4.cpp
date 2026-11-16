class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> preff;
        vector<int> suff(nums.size(),-1);
        int k=1;
        for(int i=0;i<nums.size();i++){
            preff.push_back(k);
            k=k*nums[i];
        }
        int p=1;
        for(int i=nums.size()-1;i>=0;i--){
            suff[i]=p;
            p=p*nums[i];
        }
        
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(preff[i]*suff[i]);
        }
        return res;
    }
};
