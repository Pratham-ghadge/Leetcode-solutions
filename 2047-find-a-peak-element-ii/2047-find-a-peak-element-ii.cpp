class Solution {
public:
    int findmax(vector<vector<int>>& mat, int n, int m, int col) {
        int maxval = -1;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxval) {
                maxval = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int left = 0, right = m - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int maxrowindex = findmax(mat, n, m, mid);

            int midleft = mid - 1 >= 0 ? mat[maxrowindex][mid - 1] : -1;
            int midright = mid + 1 < m ? mat[maxrowindex][mid + 1] : -1;  

            if (
                mat[maxrowindex][mid] > midleft &&
                mat[maxrowindex][mid] > midright
            ) {
                return {maxrowindex, mid};
            } else if (mat[maxrowindex][mid] < midleft) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return {-1, -1};
    }
};
