class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum1 = 0;
        int min1 = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size() && j < r+i; j++){
                sum1 = sum1 + nums[j];
                int len = j - i + 1;
                if(len >= l && len <= r && sum1 > 0){
                    min1 = min(min1, sum1);
                }
            }sum1 = 0;
        }if(min1 != INT_MAX){
            return min1;
        }return -1;
    }
};