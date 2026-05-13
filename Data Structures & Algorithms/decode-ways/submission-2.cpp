class Solution {
public:
    int helper(string & s, int i,vector<int>& vv){
        //base case
        if(i>=s.length()){
            return 1;
        }
        if(s[i]=='0'){
            return 0;
        }
        if(vv[i]!=-1){
            return vv[i];
        }
        

        //recursive equation
        string str="";
        str+=s[i];
        str+=s[i+1];
        int x=stoi(str);
        if(x<=26&&x>=10){
            return vv[i]= helper(s,i+1,vv)+helper(s,i+2,vv);
        }
        
        else{
            return vv[i]=helper(s,i+1,vv);
        }

    }
    int numDecodings(string s) {
        vector<int> vv(s.length()+1,-1);
        return helper(s,0,vv);
    }
};
