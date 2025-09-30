class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //  if we XOR two numbers then there output is 0 so if the we XOR all
        //  array elemnt the we got the out single number

        int xornum = 0;

        for (int i = 0; i < nums.size(); i++) {
            xornum = xornum ^ nums[i];
        }
        return xornum;
    }
};