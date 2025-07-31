class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = (left + right) / 2;

            int totaldays = countdays(weights, mid);

            if (totaldays <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

    int countdays(vector<int>& weights, int cap) {
       int days = 1;  
        int load = 0;
        for (int w : weights) {
            if (load + w > cap) {
                
                days++;
                load = 0;
            }
            load += w;
        }
        return days;
    }
};