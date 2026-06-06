class Solution {
public:
    void helper(vector<vector<int>> & res, vector<int>& nums, int i){
        //base case
        if(i>=nums.size()){
            res.push_back(nums);
            return;
        }
        //recursive code
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            helper(res,nums,i+1);
            swap(nums[i],nums[k]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(res,nums,0);
        return res;
    }
};
