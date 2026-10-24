class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int idx = 0;
        solve(ans, nums, idx, curr);
        return ans;
    }
    void solve(vector<vector<int>> &ans, vector<int> &nums, int idx, vector<int> &curr){
        // if(idx == nums.size()){
        //     ans.push_back(curr);
        //     return;
        // }curr.push_back(nums[idx]);
        // solve(ans, nums, idx + 1, curr);
        // curr.pop_back();
        // solve(ans, nums, idx+1, curr);
        ans.push_back(curr);
        for(int i = idx; i < nums.size(); i++){
            curr.push_back(nums[i]);
            solve(ans, nums, i + 1, curr);
            curr.pop_back();
        }
    }
};