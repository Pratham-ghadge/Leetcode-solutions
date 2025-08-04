class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        priority_queue<pair<int, char>> maxHeap;

        for (auto& p : mp) {
            maxHeap.push({p.second, p.first});
        }

       string ans = "";

        while (!maxHeap.empty()) {
            auto top = maxHeap.top();
            maxHeap.pop();

            ans.append(top.first, top.second);
        }

        return ans;
    }
};