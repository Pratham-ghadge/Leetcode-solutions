class Solution {
public:
    /*
    // using Recursion + stack
     bool match(char open , char close){
            return (open=='(' && close==')') ||
                   (open=='{' && close=='}') ||
                   (open=='[' && close==']');
        }


        bool check(string s, int idx, stack<char>& stack) {
            if (stack.empty() && idx == s.size())
                return true;
            if (!stack.empty() && idx == s.size())
                return false;

            if (s[idx] == '{' || s[idx] == '[' || s[idx] == '(') {
                stack.push(s[idx]);
                return check(s, idx + 1, stack);
            }

            if (stack.empty())
                return false;

            if(!match(stack.top(), s[idx]))
                return false;

            stack.pop();

             return check(s, idx + 1, stack);
        }

        bool isValid(string s) {
            stack<char> stack;
            return check(s, 0, stack);
        }

        */

    //  using the stack Only

    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '{' || c == '[' || c == '(') {
                stack.push(c);
            }
             else{

                if(stack.empty()) return false;

                if(
                    (c == ')' && stack.top() != '(') ||
                    (c == '}' && stack.top() != '{') ||
                    (c == ']' && stack.top() != '[')
                ){
                    return false;
                }

                stack.pop();
            }

        }
           return stack.empty();
    }
};