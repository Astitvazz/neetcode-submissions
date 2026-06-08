class Solution {
public:
    int helper(vector<int>& nums, int i, int mxtn,vector<vector<int>>& vv){
        //base case
        if(i>=nums.size()){
            return 0;
        }
        if(vv[i][mxtn+1001]!=-1){
            return vv[i][mxtn+1001];
        }
        //recursive code
        if(i==0){
            int a=0;
            int b=0;
            a=1+helper(nums,i+1,nums[i],vv);
            b=helper(nums,i+1,mxtn,vv);
            return vv[i][mxtn+1001]=max(a,b);
        }
        else{
            //take current element
            if(nums[i]>mxtn){
                int a=0;
                int b=0;
                a=1+helper(nums,i+1,nums[i],vv);
                b=helper(nums,i+1,mxtn,vv);
                return vv[i][mxtn+1001]=max(a,b);
            }
            else{
                return vv[i][mxtn+1001]=helper(nums,i+1,mxtn,vv);
            }

        }
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> vv(nums.size()+1,vector<int>(2004,-1));
        return helper(nums,0,-1001,vv);
    }
};
