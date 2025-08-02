class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        vector<string> vec;
        string word = "";

        while(i < n) {
            if(s[i] == ' ' && word == "") {
                i++;
            } else if(isalnum(s[i])) {
                word += s[i];
                i++;
            } else {
                vec.push_back(word);
                word = "";
                i++;
            }
        }
        if(word != "") {
            vec.push_back(word);
        }

        string res = "";
        for(int j = vec.size() - 1; j >= 0; j--) {
            res += vec[j];
            if(j != 0) res += ' ';
        }

        return res;
    }
};
