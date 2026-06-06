class Solution {
public:
    void helper(vector<int> & nums, vector<vector<int>>& res, int i,vector<int>& temp){
        //base case
        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }

        //recursive code
        //take the current element
        temp.push_back(nums[i]);
        helper(nums,res,i+1,temp);
        temp.pop_back();
        helper(nums,res,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        helper(nums,res,0,temp);
        set<vector<int>> st;
        for(int i=0;i<res.size();i++){
            st.insert(res[i]);
        }
        vector<vector<int>> final(st.begin(),st.end());
        return final;
    }
};
