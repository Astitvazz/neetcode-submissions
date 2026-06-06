class Solution {
public:
    void helper(vector<int>& nums,vector<int> & temp,vector<vector<int>>& res,int i){
        //base case
        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }

        //recursive code
        //1).take current element
        temp.push_back(nums[i]);
        helper(nums,temp,res,i+1);
        temp.pop_back();
        helper(nums,temp,res,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        helper(nums,temp,res,0);
        return res;
    }
};
