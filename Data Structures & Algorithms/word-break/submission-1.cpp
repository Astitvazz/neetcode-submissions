class Solution {
public:
    bool helper(string& s,unordered_map<string,int>& mpp,int i,vector<int>& vv ){
        //base case
        if(i>=s.length()){
            return true;
        }

        if(vv[i]!=-1){
            return vv[i];
        }
        //recursive code
        string temp="";
        bool ans=0;
        for(int k=i;k<s.length();k++){
            temp+=s[k];
            if(mpp.find(temp)!=mpp.end()){
                ans=ans|| helper(s,mpp,k+1,vv);
            }
        }
        return vv[i]= ans;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> mpp;
        vector<int> vv(s.length()+1,-1);
        for(int i=0;i<wordDict.size();i++){
            mpp[wordDict[i]]++;
        }
        return helper(s,mpp,0,vv);
    }
};
