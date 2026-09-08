class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++){
            prod*=nums[i];
            if (nums[i] == 0){
                idx = i;
            }
        }
        int prod1 = 1;
        for (int i = 0; i < nums.size(); i++){
            if (i!=idx){
                prod1*=nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if(nums[i]!=0){
                nums[i] = prod/nums[i];
            }else{
                nums[i] = prod1;
            }
        }return nums;
        
    }
};