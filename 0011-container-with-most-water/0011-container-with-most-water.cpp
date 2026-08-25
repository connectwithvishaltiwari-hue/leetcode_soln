class Solution {
public:
    int maxArea(vector<int>& arr) {
                int n = arr.size();
        int l = 0;
        int r = n-1;
        int m = n-1;
        int volume = 0;
        while (l < r){
            if(arr[l] >= arr[r]){
                int a = arr[r] * m;
                if (a > volume){
                    volume = a;
                }
                r--;
                m--;
            }else if(arr[l] < arr[r]){
                int b = arr[l] * m;
                if (b > volume){
                    volume = b;
                }
                l++;
                m--;
            }
        }return volume;
    }
};