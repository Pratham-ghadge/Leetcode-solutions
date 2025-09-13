class Solution {
public:
    void findsubset(vector<int>& nums, vector<int>& subset, int i,
                    vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        findsubset(nums, subset, i + 1, res);

        subset.pop_back();

        int index = i + 1;

        while (index < nums.size() && nums[index] == nums[index - 1]) {
            index++;
        }

        findsubset(nums, subset, index, res);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

           sort(nums.begin(), nums.end());
        vector<int> subset;
        vector<vector<int>> res;

        findsubset(nums, subset, 0, res);
        return res;
    }
};