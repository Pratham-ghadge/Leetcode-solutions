class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d13;
        int d23;

        if(x >= z){
            d13= x - z;
        }else{
            d13=z - x;
        }

        if (y >= z) {
            d23 = y - z;
        } else {
            d23 = z - y;
        }

        if (d23 > d13) {
            return 1;
        } else if (d23 < d13) {
            return 2;
        }

        return 0;
    }
};