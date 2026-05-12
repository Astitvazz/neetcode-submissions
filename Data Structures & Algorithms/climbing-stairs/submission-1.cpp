class Solution {
public:
    int helper(int num,vector<int>& vv){
        //base case
        if(num==0||num==1||num==2){
            return num;
        }
        if(vv[num]!=-1){
            return vv[num];
        }
        //recursive code
        int temp=helper(num-1,vv)+helper(num-2,vv);
        return vv[num]=temp;
    }
    int climbStairs(int n) {
        vector<int> vv(n+1,-1);
        return helper(n,vv);               
    }
};
