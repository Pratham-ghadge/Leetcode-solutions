class Solution {
public:
    void sortColors(vector<int>& nums) {
          int right = nums.size() - 1;
        int left = 0;
        int mid = 0;

        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[left]);
                left++;
                if(nums[mid]==0){
                    mid++;
                }
               
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[right], nums[mid]);
                right--;
            }
        }
    }
};