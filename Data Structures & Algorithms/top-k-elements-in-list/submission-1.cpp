class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        priority_queue<pair<int,int>> pq;
        for(int num:nums){
            mpp[num]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            pq.push({it->second,it->first});
        }
        vector<int> res;
        while(k>0){
            int temp=pq.top().second;
            pq.pop();
            res.push_back(temp);
            k--;
        }
        return res;
    }
};
