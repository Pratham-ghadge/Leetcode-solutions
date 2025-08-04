class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if (fruits.empty()) return 0;
        
        int type1 = fruits[0], type2 = -1;
        int maxcount = 0;
        
        int count1 = 0, count2 = 0;  // counts of type1 and type2 in current window
        int lastFruit = fruits[0], lastFruitCount = 1;
        
        count1 = 1;
        
        for (int i = 1; i < fruits.size(); i++) {
            int fruit = fruits[i];
            
            if (fruit == type1) {
                count1++;
            } else if (type2 == -1 || fruit == type2) {
                type2 = fruit;
                count2++;
            } else {
                // New fruit, not type1 or type2
                
                maxcount = max(maxcount, count1 + count2);
                
                // Move window to start from lastFruit block
                if (lastFruit == type1) {
                    // Remove count of type2, keep lastFruitCount of type1
                    count2 = 1;
                    count1 = lastFruitCount;
                    type2 = fruit;
                } else {
                    // lastFruit == type2
                    count1 = 1;
                    count2 = lastFruitCount;
                    type1 = fruit;
                }
            }
            
            // Update lastFruit and lastFruitCount
            if (fruit == lastFruit) {
                lastFruitCount++;
            } else {
                lastFruit = fruit;
                lastFruitCount = 1;
            }
        }
        
        maxcount = max(maxcount, count1 + count2);
        return maxcount;
    }
};
