class Solution {
public:
    bool isMatch(string s, string p) {
        // Base case: if pattern is empty
        if (p.empty()) {
            return s.empty();
        }

        // Check if first character matches
        bool firstMatch = (!s.empty() &&
                          (s[0] == p[0] || p[0] == '.'));

        // Case when '*' is the second character in pattern
        if (p.size() >= 2 && p[1] == '*') {
           
            return isMatch(s, p.substr(2)) ||
                   (firstMatch && isMatch(s.substr(1), p));
        } else {
            // Normal character match
            return firstMatch && isMatch(s.substr(1), p.substr(1));
        }
    }
};
