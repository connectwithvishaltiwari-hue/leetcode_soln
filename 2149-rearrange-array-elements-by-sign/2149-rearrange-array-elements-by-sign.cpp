class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size(), 0);
        int k = 0;
        int j = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0){
                arr[k] = nums[i];
                k+=2;
            }else{
                arr[j] = nums[i];
                j+=2;
            }
        }return arr;
        
    }
};