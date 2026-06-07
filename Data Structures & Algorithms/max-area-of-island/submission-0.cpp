class Solution {
public:
    int helper(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i,int j, int m,int n){
        //base case
        if(i<0||i>=m||j<0||j>=n){
            return 0;
        }
        if(grid[i][j]==0||visited[i][j]){
            return 0;
        }

        //recursive code
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        if(grid[i][j]==1){
        visited[i][j]=true;
        
        a=helper(grid,visited,i+1,j,m,n);
        b=helper(grid,visited,i-1,j,m,n);
        c=helper(grid,visited,i,j+1,m,n);
        d=helper(grid,visited,i,j-1,m,n);
        
        }
        return 1+a+b+c+d;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> visited(m+1,vector<bool>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1&&!visited[i][j]){
                    int x=helper(grid,visited,i,j,m,n);
                    res=max(res,x);
                }
            }
        }
        return res;
    }
};
