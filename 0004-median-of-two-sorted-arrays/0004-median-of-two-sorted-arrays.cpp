class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        vector<int> arr;

        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                arr.push_back(nums1[i++]);
            } else {
                arr.push_back(nums2[j++]);
            }
        }
        while (i < n) arr.push_back(nums1[i++]);
        while (j < m) arr.push_back(nums2[j++]);

        int total = n + m;
        if (total % 2 == 1) {
            return arr[total / 2];
        } else {
            return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
        }
    }
};
