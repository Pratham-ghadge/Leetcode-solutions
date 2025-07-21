class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int temp = x;
        int reverse = 0;
         while(temp > 0){
           int digit = temp % 10;
           if(reverse > (INT_MAX- digit)/10){
            return false;
           }
            reverse = (reverse * 10) + digit;
           temp = temp / 10;
         }

         if(x==reverse){
            return true;
         }

         return false;
    }
};