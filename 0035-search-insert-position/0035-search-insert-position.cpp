class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int left = 0;
      int right = nums.size() - 1;
      int ans = right+1;

      while(left <= right){
        int mid = (left+ right) / 2;
        if(nums[mid] >= target){
            ans = mid;
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
      }
      return ans;
    }
};