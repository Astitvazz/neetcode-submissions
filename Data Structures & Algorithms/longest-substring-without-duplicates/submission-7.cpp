class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        unordered_map<char,int> mpp;
        int res=0;
        for(int right=0;right<s.length();right++){
            if(mpp.find(s[right])==mpp.end()||mpp[s[right]]==0){
                mpp[s[right]]++;
                res=max(res,right-left+1);
            }
            
            else{
                while(s[left]!=s[right]){
                    mpp[s[left]]--;
                    left++;
                }
                left++;
            }
        }
        return res;
    }
};
