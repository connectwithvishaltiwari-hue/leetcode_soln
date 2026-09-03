class Solution {
public:
    int waysToSplitArray(vector<int>& arr) {
        int n = arr.size();
        long long tot_sum = 0;
        long long sum1 = 0;
        long long sum2 = 0;
        int count = 0;
        long long i = 0;
        for (int i = 0;i < n; i++){
            tot_sum += arr[i];
        }
        long long j=0;
        while (j<(n-1)){
            sum1 = sum1 + arr[j];
            sum2 = tot_sum - sum1;
            if (sum1>=sum2){
                count++;
            }j++;
        }return count;
    }
};