class Solution {
public:
    bool noDuplicate(string str){
        unordered_map<char,int> mpp;
        for(int i=0;i<str.length();i++){
            if(mpp.find(str[i])==mpp.end()){
                mpp[str[i]]++;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        //brute force approach
        vector<string> vv;
        for(int i=0;i<s.length();i++){
            string str="";
            for(int j=i;j<s.length();j++){
                str=str+s[j];
                if(noDuplicate(str)){
                    vv.push_back(str);
                }
                else{
                    break;
                }
            }
        }
        int res=0;
        for(int i=0;i<vv.size();i++){
            
                if(vv[i].length()>res){
                    res=vv[i].length();
                }
            
        }
        return res;
    }
};
