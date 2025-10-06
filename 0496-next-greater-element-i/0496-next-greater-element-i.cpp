class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            int temp = nums1[i];

            int j = 0;

            while (j < nums2.size()) {
                if (nums2[j] == temp) {
                    break;
                }
                j++;
            };

            while (j < nums2.size()) {
                if (nums2[j] > temp) {
                    ans.push_back(nums2[j]);
                    break;
                }

                j++;
            }

            if (j == nums2.size()) {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};