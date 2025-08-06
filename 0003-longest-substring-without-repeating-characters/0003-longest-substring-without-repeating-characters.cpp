class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        string word = "";
        int len =0;

        for(int i = 0 ; i < s.size(); i++){

            size_t pos = word.find(s[i]);
            if (pos == string::npos) {
                word += s[i];
                len = max(len, (int)word.size());
            } else {
               
                word = word.substr(pos + 1);
                word += s[i];
            }
        }
        return len;
        
    }
};