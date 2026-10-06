class Solution {
public:
    bool check(vector<int>& nums) {
        int check = 0;
        int k = 1;
        int i;
        for(i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                k = 0;
                break;
            }
        }if (k == 1){
            return true;
        }else{
            int t = 1;
            for(int j = i+1; j < nums.size() - 1; j++){
                if(nums[j] > nums[j+1]){
                    t = 0;
                    break;
                }
            }if(t == 1 && nums[nums.size() - 1] <= nums[0]){
                return true;
            }else{
                return false;
            }
        }
    }
};