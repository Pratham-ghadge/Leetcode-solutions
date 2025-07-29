class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int pref = 1,suff = 1;
        int maxsum = INT_MIN;
        int n = nums.size();

        for(int i = 0 ; i < nums.size() ; i++ ){
            if(pref == 0) pref = 1;
            if(suff== 0) suff = 1;

            pref = pref * nums[i];
            suff = suff * nums[n - i- 1];

            maxsum = max(maxsum,max(pref,suff));
        }
        return maxsum;
        
    }
};