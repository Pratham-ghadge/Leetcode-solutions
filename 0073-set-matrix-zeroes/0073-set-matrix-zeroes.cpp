class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> list;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    list.push_back({i, j});
                }
            }
        }

        for (int i = 0; i < list.size(); i++) {
            int k = list[i][0];
            int l = list[i][1];

            for (int y = 0; y < matrix.size(); y++) {
                for (int z = 0; z < matrix[0].size(); z++) {
                    if(k==y || z==l){
                        matrix[y][z] = 0;
                    }
                }
            }
        }
    }
};