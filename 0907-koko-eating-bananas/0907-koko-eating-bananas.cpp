class Solution {
public:


long long cal( vector<int>& piles , int div){
            long long sum = 0;
            for(int i = 0 ; i < piles.size(); i++){
                 sum += (piles[i] + div - 1)/ div;
            }
            return sum;
        }



    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
      
        int right = *max_element(piles.begin(), piles.end());

        

        while(left < right){
            int mid = (left + right) / 2;
           long long  dec = cal(piles , mid);
            if( dec <= h){
               right = mid;
            } else{
                left = mid + 1;
            }
            
        }

        return left;
        
    }
};