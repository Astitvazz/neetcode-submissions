class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix_prod(nums.size());
        vector<int> sufix_prod(nums.size());
        int prodtnl=1;
        for(int i=0;i<nums.size();i++){
            prefix_prod[i]=prodtnl;
            prodtnl=prodtnl*nums[i];
        }
        int prodtnr=1;
        for(int i=nums.size()-1;i>=0;i--){
            sufix_prod[i]=prodtnr;
            prodtnr=prodtnr*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=prefix_prod[i]*sufix_prod[i];
        }
        return nums;
    }
};
