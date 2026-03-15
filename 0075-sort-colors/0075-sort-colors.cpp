class Solution {
public:
    void sortColors(vector<int>& nums) {

        int first = 0;
        int nth = nums.size() - 1;
        int i = 0;

        while(i <= nth) {

            if(nums[i] == 0){
                swap(nums[i], nums[first]);
                first++;
                i++;
            }

            else if(nums[i] == 1){
                i++;
            }

            else { 
                swap(nums[i], nums[nth]);
                nth--;
            }
        }
    }
};