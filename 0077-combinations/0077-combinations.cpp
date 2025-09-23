class Solution {
public:
    void findcombinitions(int start, int k, int n, vector<int>& ds,
                        vector<vector<int>>& ans) {
        if (ds.size()== k){
            ans.push_back(ds);
            return;
        }

        for(int i = start ; i <= n; i++){
            ds.push_back(i);
            findcombinitions(i+1, k,n,ds,ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombinitions(1, k, n, ds, ans);
        return ans;
    }
};