class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0;
        int count = 0;
        for (int i = 0; i < k; i++){
            sum = sum + arr[i];
        }
        int avg = sum / k;
        if (avg >= threshold){
            count++;
        }
        for (int i = 0; i < (n-k); i++){
            sum = sum - arr[i] + arr[i+k];
            avg = sum / k;
            if (avg >= threshold){
                count++;
            }
        }return count;
    }
};