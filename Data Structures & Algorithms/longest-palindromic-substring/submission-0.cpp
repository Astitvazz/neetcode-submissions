class Solution {
public:
    bool isPal(string &str){
        int i=0;
        int j=str.size()-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        vector<string> temp;
        for(int i=0;i<s.length();i++){
            string str="";
            for(int j=i;j<s.length();j++){
                str=str+s[j];
                temp.push_back(str);
            }
        }
        string curr="";
        for(int i=0;i<temp.size();i++){
            if(isPal(temp[i])){
                if(temp[i].length()>curr.length()){
                    curr=temp[i];
                }
            }
        }
        return curr;
    }
};
