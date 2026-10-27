class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        solve(nums, ans, curr);
        return ans;
    }
    void solve(vector<int>& nums, vector<vector<int>>&ans, vector<int> curr){
        if(curr.size() == nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(find(curr.begin(), curr.end(), nums[i]) == curr.end()){
                curr.push_back(nums[i]);
                solve(nums, ans, curr);
                curr.pop_back();
            }
        }
    }
};