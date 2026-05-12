class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int> mpp;
            for(int j=i;j<s.length();j++){
                if(mpp.find(s[j])==mpp.end()){
                    mpp[s[j]]++;
                    res=max(res,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return res;
    }
};
