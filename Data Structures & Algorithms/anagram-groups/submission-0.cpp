class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp=strs;
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
        }
        unordered_map<string,vector<int>> mpp;
        for(int i=0;i<strs.size();i++){
            mpp[strs[i]].push_back(i);
        }
        vector<vector<string>> res;
        for(auto it=mpp.begin();it!=mpp.end();++it){
            vector<string> tt;
            for(int x=0;x<it->second.size();x++){
                tt.push_back(temp[it->second[x]]);
            }
            res.push_back(tt);
        }
        return res;
    }
};
