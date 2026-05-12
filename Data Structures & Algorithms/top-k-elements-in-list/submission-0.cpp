class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();++it){
            pq.push({it->second,it->first});
        }
        vector<int> res;
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};
