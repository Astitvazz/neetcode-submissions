class Solution {
public:
    bool isPal(string &s,int i,int j,vector<vector<int>>& vv){
        //base case
        if(i>=j){
            return true;
        }
        if(vv[i][j]!=-1){
            return vv[i][j];
        }
        //recursive code
        if(s[i]!=s[j]){
            return false;
        }
        else{
            return vv[i][j]=isPal(s,i+1,j-1,vv);
        }
    }
    int countSubstrings(string s) {
        int count=0;
        vector<vector<int>> vv(s.length()+1,vector<int>(s.length()+1,-1));
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(isPal(s,i,j,vv)){
                    count++;
                }
            }
        }
        return count;
    }
};
