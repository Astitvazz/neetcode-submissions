class Solution {
public:
    bool helper(vector<int>& nums, int i,vector<int>& vv){
        //base case
        if(i>=nums.size()-1){
            return true;
        }
        if(vv[i]!=-1){
            return vv[i];
        }

        //recursive code
        bool x=false;
        for(int k=1;k<=nums[i];k++){
            bool y=helper(nums,i+k,vv);
            x=x||y;
        }
        return vv[i]=x;
    }
    bool canJump(vector<int>& nums) {
        vector<int> vv(nums.size(),-1);
        return helper(nums,0,vv);
    }
};
