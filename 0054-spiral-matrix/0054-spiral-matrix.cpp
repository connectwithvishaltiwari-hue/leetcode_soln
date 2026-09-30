class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n =mat.size();
        int m =mat[0].size();
        int srow = 0, scol = 0;
        int erow = n-1, ecol = m-1;
        vector<int>arr;
        while (srow <= erow && scol <= ecol) {
         
        // top
        for (int j = scol; j <= ecol; j++)
        arr.push_back(mat[srow][j]);
         
        // right
        for (int i = srow + 1; i <= erow; i++)
        arr.push_back(mat[i][ecol]);
         
        // bottom
        if (srow < erow) {
            for (int j = ecol - 1; j >= scol; j--){
                arr.push_back(mat[erow][j]);
            }
        }
         
        // left
        if (scol < ecol) {
        for (int i = erow - 1; i > srow; i--)
        arr.push_back(mat[i][scol]);
        }
         
        srow++;
        scol++;
        erow--;
        ecol--;
        }return arr;
    }
};