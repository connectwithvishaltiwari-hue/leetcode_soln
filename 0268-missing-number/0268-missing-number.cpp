class Solution {
public:
    long long missingNumber(vector<int>& arr) {
        // code here
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++){
            sum+=arr[i];
        }
        long long n = arr.size();
        long long tot = (n*(n+1))/2;
        return tot - sum;
    }
};