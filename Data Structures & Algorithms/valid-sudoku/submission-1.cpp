class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // first check
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> mpp;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (mpp.find(board[i][j]) != mpp.end()) {
                        cout<<board[i][j];
                        return false;
                    } else {
                        mpp[board[i][j]]++;
                        cout<<board[i][j];
                    }
                }
            }
        }
        
        // second check
        for (int j = 0; j < 9; j++) {
            unordered_map<char, int> mpp;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    if (mpp.find(board[i][j]) != mpp.end()) {
                        cout<<board[i][j];
                        return false;
                    } else {
                        mpp[board[i][j]]++;
                        cout<<board[i][j];
                    }
                }
            }
        }
        // third check
        for (int i = 0; i < 9; i = i + 3) {
            for (int j = 0; j < 9; j = j + 3) {
                unordered_map<char, int> mpp;
                for (int k = i; k < i + 3; k++) {
                    for (int l = j; l < j + 3; l++) {
                        if (board[k][l] != '.') {
                            if (mpp.find(board[k][l]) != mpp.end()) {
                                cout<<board[k][l];
                                return false;
                            } else {
                                cout<<board[k][l];
                                mpp[board[k][l]]++;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
