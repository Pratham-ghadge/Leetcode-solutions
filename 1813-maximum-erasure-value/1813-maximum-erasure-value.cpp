class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>set;
        int right = 0 ; int left = 0;
        int maxsum = 0 ; int sum = 0;

        while(right < n){
            while(set.count(nums[right])){
                   set.erase(nums[left]);
                    sum -= nums[left];
                    left++;
            }
            set.insert(nums[right]);
            sum += nums[right];
            maxsum = max(maxsum,sum);
            right++;

        }
        
        return maxsum;
    }
};