class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max1 = 0;
        int sum = 0;
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[0].size(); j++){
                sum += accounts[i][j];
            }max1 = max(max1, sum);
            sum = 0;
        }return max1;
    }
};