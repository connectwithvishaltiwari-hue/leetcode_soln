class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum+=i;
        }int sum1 = 0;
        for(int i = 1; i<=n; i++){
            int sum2 = sum - sum1;
            sum1 += i;
            if(sum2 == sum1){
                return i;
            }
        }return -1;
    }
};