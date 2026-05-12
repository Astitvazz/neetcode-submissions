class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mpp[t[i]]--;
        }
        for(auto it=mpp.begin();it!=mpp.end();++it){
            if(it->second!=0){
                return false;
            }
        }
        return true;
    }
};
