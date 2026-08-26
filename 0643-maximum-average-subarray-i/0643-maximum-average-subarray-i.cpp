class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int max_sum = 0;
        double avg = 0;
        for(int i = 0;i < k; i++){
            sum = sum + nums[i];
        }
        max_sum = sum;
        for (int i = 0; i < n-k; i++){
            sum = sum - nums[i] + nums[i+k];
            if (max_sum < sum){
                max_sum = sum;
            }
        }avg = (double)max_sum / k;
        return avg;
    }
};