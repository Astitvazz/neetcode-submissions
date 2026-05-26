class Solution {
public:
    int helper(vector<int>& nums,int i, int target, vector<vector<int>>& vv){
        //base case
        if(i==nums.size()&&target==0){
            return 1;
        }
        if(i>=nums.size()&&target!=0){
            return 0;
        }
        if(vv[target+1000][i]!=-1){
            return vv[target+1000][i];
        }
        //recursive code
        int x=0;
        int y=0;
        //1). .......+........
        x=helper(nums,i+1,target-nums[i],vv);
        //2).........-.........
        y=helper(nums,i+1,target+nums[i],vv);
        return vv[target+1000][i]=x+y;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<vector<int>> vv(2002,vector<int>(nums.size()+1,-1));
        return helper(nums,0,target,vv);
    }
};
