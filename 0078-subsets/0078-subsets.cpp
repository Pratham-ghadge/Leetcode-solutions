class Solution {
public:
    void findsubset(vector<int>& nums, vector<int>& subset, int i,
                    vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(subset);
            return;
        }
        //    include the i'th position number to the subset
        subset.push_back(nums[i]);
        findsubset(nums, subset, i + 1, res);

        // backtrack and excludes the ith postion number and add to the remaning
        // array in subset
        subset.pop_back();
        findsubset(nums, subset, i + 1, res);
    }



    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>subset;
        vector<vector<int>>res;
        findsubset(nums,subset,0,res);
        return res;
    }
    
};