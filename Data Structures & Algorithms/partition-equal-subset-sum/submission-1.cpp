class Solution {
public:
    bool helper(vector<int>& nums,int sum,int i,vector<vector<int>>& vv){
        //base case
        if(i>=nums.size()||sum<0){
            return false;
        }
        if(sum==0){
            return true;
        }
        if(vv[sum][i]!=-1){
            return vv[sum][i];
        }
        //recursive code
        //1). current number is part of subset
        bool a=helper(nums,sum-nums[i],i+1,vv);
        //2).current number is not part of subset
        bool b=helper(nums,sum,i+1,vv);
        return vv[sum][i]=a||b;

    }
    bool canPartition(vector<int>& nums) {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i];
        }
        if(temp%2!=0){
            return false;
        }
        int sum=temp/2;
        vector<vector<int>> vv(sum+1,vector<int>(nums.size()+1,-1));
        return helper(nums,sum,0,vv);

    }
};
