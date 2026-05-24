class Solution {
public:
    int helper(string text1, string text2, int i,int j,vector<vector<int>>& vv){
        //base case
        if(i>=text1.length()||j>=text2.length()){
            return 0;
        }
        if(vv[i][j]!=-1){
            return vv[i][j];
        }
        //recursive code
        //1). both characters at i and j are equal
        if(text1[i]==text2[j]){
            return vv[i][j]=1+helper(text1,text2,i+1,j+1,vv);
        }
        //2). both characters at i and j are not same
        else{
        int a=0;
        int b=0;
        if(i+1<text1.length()){
            a=helper(text1,text2,i+1,j,vv);
        }
        if(j+1<text2.length()){
            b=helper(text1,text2,i,j+1,vv);
        }
        return vv[i][j]=max(a,b);
        }

    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> vv(text1.length()+1,vector<int>(text2.length()+1,-1));
        return helper(text1,text2,0,0,vv);
    }
};
