class Solution {
public:
    string makeFancyString(string s) {
        int count = 1;
        string res;

        for(int i = 0 ; i < s.size(); i++){
            
            if(i > 0 && s[i] == s[i-1]){
                count++;
            }else{
                count = 1;
            }

            if(count <=2){
                res +=s[i];
            }
           

        }
        return res;
        
    }
};