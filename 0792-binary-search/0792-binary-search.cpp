class Solution {
public:
    // helper function

    int binarysearch(vector<int>& nums, int target, int start, int end) {
        if (start <= end) {
            int mid = start + (end - start ) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                return binarysearch(nums, target, start, end - 1);
            } else {
                return binarysearch(nums, target, start +1, end);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {

        // binary search using the recursion

        int start = 0;
        int end = nums.size() - 1;

        return binarysearch(nums, target, start, end);
    }
};

//  int search(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size() - 1;

//         while (left <= right) {
//             int mid = (left + right) / 2;
//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//         return -1;
//     }
