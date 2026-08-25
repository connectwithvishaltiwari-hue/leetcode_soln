class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        int m = n-1;
        int k = 0;
        while (l < r){
            if (arr[l]<arr[r]){
                int mul = arr[l] * m;
                if (k<mul){
                    k = mul;
                }l++;
                m--;
            }else if(arr[l]>=arr[r]){
                int mul = arr[r] * m;
                if (k<mul){
                    k = mul;
                }r--;
                m--;
            }

        }return k;
    }
};