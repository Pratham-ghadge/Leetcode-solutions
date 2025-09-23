class Solution {
public:
          void findcombination(int ind , vector<int>& arr, int target,vector<int>&ds,vector<vector<int>>&ans){
            if(ind == arr.size()){
                if(target == 0){
                    ans.push_back(ds);
                }
                return;
            }

            if(arr[ind] <= target){
                ds.push_back(arr[ind]);
                findcombination(ind,arr,target - arr[ind],ds,ans);
                ds.pop_back();
            }

             findcombination(ind+1,arr,target,ds,ans);
          }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0, candidates, target, ds, ans);
        return ans;
    }
};