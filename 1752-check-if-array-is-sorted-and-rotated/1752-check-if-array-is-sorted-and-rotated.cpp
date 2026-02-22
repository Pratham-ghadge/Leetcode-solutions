class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                pivot = i;
                break;
            }
        }

        if (pivot == -1) return true;

        reverse(nums.begin(), nums.begin() + pivot);
        reverse(nums.begin() + pivot, nums.end());
        reverse(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) return false;
        }

        return true;
    }
};