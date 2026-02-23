class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int>s;
        s.push(-1);
        for(int i = arr.size() - 1; i >= 0 ; i--){
             int top = s.top();
             while(!s.empty() && s.top() < arr[i]){
                s.pop();
             }
              if(s.empty() ||  s.top() < arr[i] ){
                 s.push(arr[i]);
              }
              arr[i] = top;

        }
        return arr;
    }
};