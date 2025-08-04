class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> v1(256, -1);
        vector<int> v2(256, -1);

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (v1[c1] == -1 && v2[c2] == -1) {
                v1[c1] = c2;
                v2[c2] = c1;
            } else {

                if (v1[c1] != c2 || v2[c2] != c1) {
                    return false;
                }
            }
        }

        return true;
    }
};