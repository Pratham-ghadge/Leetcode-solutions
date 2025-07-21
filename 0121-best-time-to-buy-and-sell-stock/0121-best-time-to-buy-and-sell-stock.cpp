class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxnum = 0;
        int minum = prices[0];
        for(int i = 0 ; i < prices.size(); i++){

            int profit = prices[i] - minum;

            maxnum = max(maxnum , profit);

            minum = min(prices[i], minum);

        }
        return maxnum;
    }
};