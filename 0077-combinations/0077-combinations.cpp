class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        int c = 1;
        solve(n, k, ans, curr, c);
        return ans;
    }
    void solve(int n, int k, vector<vector<int>> &ans, vector<int> curr, int c){
        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }
        for(int i = c; i <= n; i++){
            curr.push_back(i);
            solve(n, k, ans, curr, c=i+1);
            curr.pop_back();

        }
    }
};