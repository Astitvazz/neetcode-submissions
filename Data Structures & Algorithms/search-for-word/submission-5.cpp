class Solution {
public:
    bool helper(vector<vector<char>>& board, string word, int i, int j,int k,int m, int n,vector<vector<bool>>& visited){
        //base case
        if(k>=word.size()){
            return true;
        }
        if(i>=m||i<0||j>=n||j<0){
            return false;
        }
        if(board[i][j]!=word[k]){
            return false;
        }
        if(visited[i][j]){
            return false;
        }
        visited[i][j]=true;
        //recursive code
        bool a=0;
        bool b=0;
        bool c=0;
        bool d=0;
  
            a=helper(board,word,i+1,j,k+1,m,n,visited);
       
       
            b=helper(board,word,i-1,j,k+1,m,n,visited);
        
   
            c=helper(board,word,i,j+1,k+1,m,n,visited);
        

            d=helper(board,word,i,j-1,k+1,m,n,visited);
        visited[i][j]=false;
        return a||b||c||d;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        bool res=0;
        int k=0;
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                res=res||helper(board,word,i,j,k,m,n,visited);
            }
        }
        return res;
    }
};
