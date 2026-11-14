class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        for(char str:s){
            mpp[str]++;
        }
        for(char str:t){
            mpp[str]--;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=0){
                return false;
            }
        }
        return true;
    }
};
