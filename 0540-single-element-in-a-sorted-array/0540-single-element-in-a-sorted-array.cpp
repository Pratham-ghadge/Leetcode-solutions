class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int count = 0;
        int mid = 0;

        while (left < right) {
            mid = (left + right) / 2;

            if (mid % 2 != 0) {
                mid--;
            }
            
                if (nums[mid + 1] == nums[mid]) {
                    left = mid + 2;
                } else {
                    right = mid;
                }
            
        }

        return nums[left];
    }
};