class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int res=0;
        unordered_map<char,int> mpp;
        while(right<s.length()){
            if(mpp.find(s[right])==mpp.end()||mpp[s[right]]<1){
                mpp[s[right]]++;
            }
            else{
                while(s[left]!=s[right]){
                    mpp[s[left]]--;
                    left++;
                }
                
                left++;
            }
            res=max(res,right-left+1);
            right++;
        }
        return res;
    }
};
