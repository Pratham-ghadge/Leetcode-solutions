class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;

    // Loop twice for circular behavior
    for (int i = 0; i < 2 * n; i++) {
        int num = nums[i % n];

        // Resolve elements smaller than current
        while (!st.empty() && nums[st.top()] < num) {
            result[st.top()] = num;
            st.pop();
        }

        // Only push indices in first pass
        if (i < n) {
            st.push(i);
        }
    }

    return result;
    }
};