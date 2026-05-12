class Solution {
public:
    bool explore(vector<vector<char>>& board,int m,int n){
        unordered_set<char> st;
        for(int i=m;i<m+3;i++){
            for(int j=n;j<n+3;j++){
                if(st.find(board[i][j])!=st.end()&&board[i][j]!='.'){
                    return false;
                }
                else{
                    st.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //1st check
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(st.find(board[i][j])!=st.end()&&board[i][j]!='.'){
                    return false;
                }
                else{
                    st.insert(board[i][j]);
                }
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if((st.find(board[j][i])!=st.end())&&board[j][i]!='.'){
                    return false;
                }
                else{
                    st.insert(board[j][i]);
                }
            }
        }
        //second check
        bool flag=true;
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                flag=flag&&explore(board,i,j);
            }
        }
        return flag;
    }
};
