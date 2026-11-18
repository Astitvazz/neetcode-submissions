class Solution {
public:
    int helper(string &s,int i,vector<int>& vv){
        //base case
        if(i>=s.length()){
            return 1;
        }
        if(vv[i]!=-1){
            return vv[i];
        }
        //recursive code
        //case 1
        int picked_one=0;
        int picked_two=0;
        if(s[i]!='0'){
            picked_one=helper(s,i+1,vv);
        }
        string temp="";
        temp=temp+s[i];
        temp=temp+s[i+1];
        if(stoi(temp)<27&&stoi(temp)>=10){
            picked_two=helper(s,i+2,vv);
        }
        return vv[i]=picked_one+picked_two;

    }
    int numDecodings(string s) {
        vector<int>vv(s.length(),-1);
        return helper(s,0,vv);
    }
};
