class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int prod1 = 1;
        int max_prod = INT_MIN;
        int max_prod1 = INT_MIN;
        for(int i = 0; i < n; i++){
            prod *= nums[i];
            max_prod = max(prod, max_prod);
            if(prod == 0){
                prod = 1;
            }
        }
        for(int i = (n-1); i>=0; i--){
            prod1 *= nums[i];
            max_prod1 = max(prod1, max_prod1);
            if(prod1 == 0){
                prod1 = 1;
            }
        }return max(max_prod, max_prod1);
    }
};