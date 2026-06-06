class Solution {
public:
    void helper(vector<int>& nums, int target, int i, vector<vector<int>>& res,vector<int>& temp){
        //base case
        if(target==0){
            res.push_back(temp); //agar kisi subset par target 0 hai to usko answer me le lo
            return;
        }
        if(i>=nums.size()||target<0){
            return;               //agar i out of bound ho jaaye ya target negative ho jaaye to return maar do
        }

        //recursive code
        //take current element
        temp.push_back(nums[i]);
        helper(nums,target-nums[i],i,res,temp);//ye asal me saare subsets nikal rahe hai brute force se
        temp.pop_back();
        //don't take current element
        helper(nums,target,i+1,res,temp);// yaha bhi saare subsets nikal rahe hai brute force se
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        helper(nums,target,0,res,temp);
        return res;
        //har back tracking ke question me think of what options do i have currently and explore all options, in plain recursion hum just input ko chota karne ki sochte hai
    }
};
