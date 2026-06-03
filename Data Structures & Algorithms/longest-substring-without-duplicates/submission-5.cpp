class Solution {
public:
    bool noDuplicate(string str){
        unordered_set<char> st;
        for(int i=0;i<str.length();i++){
            st.insert(str[i]);
        }
        return st.size()==str.length();
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
