class Solution {
public:
    int helper(vector<int>& nums,int i,vector<int>& vv){
        //base cse
        if(i>=nums.size()){
            return 0;
        }
        if(vv[i]!=-1){
            return vv[i];
        }
        //recursive equation
        int op1=helper(nums,i+1,vv);
        int op2=nums[i]+helper(nums,i+2,vv);
        return vv[i]=max(op1,op2);

    }
    int rob(vector<int>& nums) {
        vector<int> vv(nums.size()+1,-1);
        return helper(nums,0,vv);
    }
};
