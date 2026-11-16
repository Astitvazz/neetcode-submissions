class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num:nums){
            mpp[num]++;
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            int cnt=1;
            if(mpp.find(nums[i]-1)==mpp.end()){
                cout<<nums[i];
                int temp=nums[i]+1;
                while(mpp.find(temp)!=mpp.end()){
                    cnt++;
                    temp=temp+1;
                }
            }
            res=max(res,cnt);
        }
        return res;

    }
};
