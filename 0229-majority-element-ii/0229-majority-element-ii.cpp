class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int>vec;
        for(int i = 0; i< nums.size(); i++){
             map[nums[i]] += 1;
        }

        for(auto &i : map){
            if(i.second > (nums.size() / 3 )){
        vec.push_back(i.first);
            }
        }

        return vec;
    }
};