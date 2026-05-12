class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0||nums.size()==1){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int count=0;
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1){
                count++;
                res=max(res,count);
            }
            else if(nums[i+1]-nums[i]==0){
                continue;
            }
            else{
                count=0;
            }
        }
        return res+1;
    }
};
