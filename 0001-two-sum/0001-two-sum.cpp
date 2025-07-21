class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
     map<int , int>premap;

    for(int i = 0 ; i < n; i++){
         int finde = target - nums[i];

         if(premap.find(finde) != premap.end()){
            return{premap.find(finde)->second , i};
         }

         premap.insert({nums[i], i});


    }

    return{};
    }
};