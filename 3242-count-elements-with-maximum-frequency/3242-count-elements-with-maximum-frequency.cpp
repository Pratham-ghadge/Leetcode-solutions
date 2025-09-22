class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for (int num : nums) {
            mp[num] += 1;
        }
         int maxFreq = 0;
        for (auto &p : mp) {
            maxFreq = max(maxFreq, p.second);
        }

        int sum = 0;
        for (auto &p : mp) {
            if (p.second == maxFreq) {
                sum += p.second;
            }
        }

        return sum;
        
    }
}; 