class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int>curr;
        int idx = 0;
        solve(ans, idx, curr, nums);
        return ans;
    }
    void solve(vector<vector<int>> &ans, int idx, vector<int> &curr, vector<int> &nums){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[idx]);
        solve(ans, idx+1, curr, nums);
        curr.pop_back();
        while(idx + 1 < nums.size()  && nums[idx] == nums[idx+1]){
            idx += 1;
        }
        solve(ans, idx+1, curr, nums);
    }
};