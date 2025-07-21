class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1)return 0;
        sort(nums.begin(), nums.end());
         int count  = 1;
         int mxcount = 1;
         int last = 0;
        for(int i = 0 ; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
             if(nums[i]+1 == nums[i+1]){
                count++;
                mxcount = max(count , mxcount);
            }else{
                count = 1;
            }
        }
        return mxcount;
    }
};