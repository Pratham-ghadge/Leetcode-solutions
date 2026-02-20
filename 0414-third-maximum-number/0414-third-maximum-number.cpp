class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long f_max = LONG_MIN;
        long s_max = LONG_MIN;
        long t_max = LONG_MIN;

        for (int num : nums) {
            if (num == f_max || num == s_max || num == t_max)
                continue;

            if (num > f_max) {
                t_max = s_max;
                s_max = f_max;
                f_max = num;
            } else if (num > s_max) {
                t_max = s_max;
                s_max = num;
            } else if (num > t_max) {
                t_max = num;
            }
        }

        return (t_max == LONG_MIN) ? (int)f_max : (int)t_max;
    }
};