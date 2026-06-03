class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a= stoi(st.top());
                st.pop();
                int b= stoi(st.top());
                st.pop();
                int c;
                if(tokens[i]=="+"){
                    c=b+a;
                }
                if(tokens[i]=="-"){
                    c=b-a;
                }
                if(tokens[i]=="*"){
                    c=b*a;
                }
                if(tokens[i]=="/"){
                    c=b/a;
                }
                string str=to_string(c);
                st.push(str);
            }
            else{
                st.push(tokens[i]);
            }
        }
        return stoi(st.top());
    }
};
