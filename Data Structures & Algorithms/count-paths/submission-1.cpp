class Solution {
public:
    int helper(int m,int n,int i,int j,vector<vector<int>>& vv){
        //base case
        if(i==m-1&&j==n-1){
            return 1;
        }
        if(vv[i][j]!=-1){
            return vv[i][j];
        }
        //recursive code
        //1).move right
        int x=0;
        int y=0;
        if(j+1<n){
            x=helper(m,n,i,j+1,vv);
        }
        //2).move down
        if(i+1<m){
            y=helper(m,n,i+1,j,vv);
        }
        return vv[i][j]=x+y;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> vv(m+1,vector<int>(n+1,-1));
        return helper(m,n,0,0,vv);
    }
};
