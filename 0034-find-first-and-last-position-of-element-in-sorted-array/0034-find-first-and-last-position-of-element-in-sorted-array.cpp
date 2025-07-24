class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

           int pool1 = -1 , pool2 = -1;
        for(int i = 0 ; i < nums.size(); i++){
             if(nums[i]== target){
                if(pool1 == -1){
                    pool1 = i;
                    pool2 = i;
                }else{
                    pool2 = i;
                }
             }
        }
        return{pool1,pool2};
        
    }
};