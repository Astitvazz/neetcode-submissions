class Solution {
public:
    int helper(vector<int>& nums,int i, int target){
        //base case
        if(i==nums.size()&&target==0){
            return 1;
        }
        if(i>=nums.size()&&target!=0){
            return 0;
        }
        //recursive code
        int x=0;
        int y=0;
        //1). .......+........
        x=helper(nums,i+1,target-nums[i]);
        //2).........-.........
        y=helper(nums,i+1,target+nums[i]);
        return x+y;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums,0,target);
    }
};
