class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        if (bloomDay.size() < (long long )m * k) {
            return -1;
        }

        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        int result = 0;


        while (left < right) {
            int mid = (left + right) / 2;

            if (canmakebouque(bloomDay, m, k, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int canmakebouque(vector<int>& bloomDay, int m, int k, int days) { 
        int adjecent = 0;
        int bouquets = 0;
        
        for(int bloom : bloomDay){
            if(bloom <= days){
                adjecent++;
            }else{
                bouquets += adjecent / k;
                adjecent = 0;
            }
        }
          bouquets += adjecent / k;
        return bouquets >= m;
        
          }
};