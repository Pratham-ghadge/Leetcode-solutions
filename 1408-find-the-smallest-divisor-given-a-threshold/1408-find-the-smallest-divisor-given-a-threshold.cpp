class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right) {
            int mid = (left + right) / 2;

            if (calculate(nums, threshold, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

    bool calculate(vector<int>& nums, int threshold, int mid) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + mid - 1) / mid;
        }

        return (threshold >= sum);
    }
};