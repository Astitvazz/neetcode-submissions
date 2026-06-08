class Solution {
public:
    int helper(vector<vector<int>>& matrix,int i,int j,int m,int n,vector<vector<int>>& vv){
        //base case
        if(i<0||i>=m||j<0||j>=n){
            return 0;
        }
        
        if(vv[i][j]!=-1){
            return vv[i][j];
        }
        //recursive code
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        if(i+1<m&&matrix[i+1][j]>matrix[i][j]){
            a=helper(matrix,i+1,j,m,n,vv);
        }
        if(i-1>=0&&matrix[i-1][j]&&matrix[i-1][j]>matrix[i][j]){
            b=helper(matrix,i-1,j,m,n,vv);
        }
        if(j+1<n&&matrix[i][j+1]>matrix[i][j]){
            c=helper(matrix,i,j+1,m,n,vv);
        }
        if(j-1>=0&&matrix[i][j-1]>matrix[i][j]){
            d=helper(matrix,i,j-1,m,n,vv);
        }
        return vv[i][j]=1+max({a,b,c,d});

    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int res=0;
        vector<vector<int>> vv(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res=max(res,helper(matrix,i,j,m,n,vv));
            }
        }
        return res;
    }
};
