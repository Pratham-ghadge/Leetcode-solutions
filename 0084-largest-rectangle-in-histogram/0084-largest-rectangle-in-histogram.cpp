class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        vector<int>left(heights.size(), 0);
        vector<int>right(heights.size(),0);
        stack<int>st;

        // right smallest element


        for(int i = heights.size() - 1 ; i >= 0 ;i--){
            while(!st.empty()&& heights[st.top()] >= heights[i]){
                st.pop();
            }

            right[i] = st.empty() ? heights.size() : st.top();
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }

        // left smallest element 

        for(int i = 0 ; i < heights.size() ; i++){
        
        while(!st.empty()&& heights[st.top()] >= heights[i]){
                st.pop();
            }

      left[i] = st.empty() ?  -1 : st.top();

          st.push(i);
        }

        // calculate the largest histogram

        int area = 0;

        for(int i = 0 ; i < heights.size(); i++){

            int width = right[i] - left[i] - 1;
            
            int currentarea = heights[i] * width;

            area = max(area, currentarea);
        }

   return area;
        
    }
};