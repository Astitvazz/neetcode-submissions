class Solution {
public:
    void helper(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int m, int n){
        //base case
        if(i<0||i>=m||j<0||j>=n){
            return;
        }
        if(grid[i][j]=='0'||visited[i][j]==true){
            return;
        }

        //recursive equation
        visited[i][j]=true;
        if(grid[i][j]=='1'){
            helper(grid,visited, i+1,j,m,n);
            helper(grid,visited, i-1,j,m,n);
            helper(grid,visited, i,j+1,m,n);
            helper(grid,visited, i,j-1,m,n);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<bool>> visited(m+1,vector<bool>(n+1,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    count++;
                    helper(grid,visited,i,j,m,n);
                }
            }
        }
        return count;
    }
};
