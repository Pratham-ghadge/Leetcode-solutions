class Solution {
public:

    bool checkPalindrome(string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(checkPalindrome(s, i, j)){
                    int len = j - i + 1;
                    if(ans.size() < len){
                        ans = s.substr(i, len);
                    }
                }
            }
        }
        return ans;
    }
};
