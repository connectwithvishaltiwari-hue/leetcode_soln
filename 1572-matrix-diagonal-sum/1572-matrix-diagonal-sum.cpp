class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int r = mat.size();
        int c = mat[0].size();
        int j = c-1;
        for(int i = 0; i < r; i++){
            sum += mat[i][i];
            if(i!=j){
                sum+=mat[i][j];
            }j--;
        }return sum;
    }
};