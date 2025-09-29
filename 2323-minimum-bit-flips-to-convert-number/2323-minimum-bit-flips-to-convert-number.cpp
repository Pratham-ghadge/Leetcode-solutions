class Solution {
public:
    int minBitFlips(int start, int goal) {
    //    // using the left shift operator
    //     int ans = start ^ goal;
    //     int count = 0;

    //     for(int i = 0 ; i <= 31; i++){
    //         if(ans & (1 << i )){
    //             count++;
    //         }

    //     }
        
    //     return count;


        // using the right shift operator

        int ans = start ^ goal;
        int count = 0;
       while(ans > 0){
        if(ans & 1 ){
            count++;
        }
        ans = ans >> 1;
       }
       return count;
    }
};