class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        for (int i = 0; i < s.size(); i++) {

            unordered_map<char, int> mp;

            for (int j = i; j < s.size(); j++) {
                mp[s[j]]++;
                int max_freq = 0;
                int min_freq = INT_MAX;

                for (auto& it : mp) {
                    max_freq = max(max_freq, it.second);
                    min_freq = min(min_freq, it.second);
                }
                beauty += (max_freq - min_freq);
            }
        }
        return beauty;
    }
};