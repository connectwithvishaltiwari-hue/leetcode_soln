class Solution {
public:
    int solve(int n, vector<int>& arr) {
        if (n == 1){
            return 1;
        }else if( n == 2){
            return 2;
        }else if ( n == 3){
            return 3;
        }else{
            if(arr[n] != -1){
                return arr[n];
            }else{
                arr[n] = solve(n-1, arr) + solve(n-2, arr);
            }
        }return arr[n];
    }int climbStairs(int n){
        vector<int>arr(n+1, -1);
        return solve(n, arr);
    }
};