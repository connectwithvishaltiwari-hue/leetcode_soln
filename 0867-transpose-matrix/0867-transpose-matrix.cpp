class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int c = matrix.size();
        int r = matrix[0].size();
        vector<vector<int>> v(r, vector<int>(c, 0)); 
        for(int i = 0; i < c; i++){
            for(int j =0; j < r; j++){
                v[j][i] = matrix[i][j];
            }
        }return v;
    }
};