class Solution {
public:
    void helper(vector<int>& nums, int target, int i, vector<vector<int>>& res,vector<int>& temp){
        //base case
        if(target==0){
            res.push_back(temp);
            return;
        }
        if(i>=nums.size()||target<0){
            return;
        }

        //recursive code
        //take current element
        temp.push_back(nums[i]);
        helper(nums,target-nums[i],i,res,temp);
        temp.pop_back();
        //don't take current element
        helper(nums,target,i+1,res,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(nums,target,0,res,temp);
        return res;
    }
};
