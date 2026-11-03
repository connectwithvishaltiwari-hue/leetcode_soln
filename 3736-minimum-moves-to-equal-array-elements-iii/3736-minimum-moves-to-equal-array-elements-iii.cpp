class Solution {
public:
    int minMoves(vector<int>& nums) {
        int subs = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
            }
        }for(int i = 0; i < nums.size(); i++){
            subs += max - nums[i];
        }return subs;
    }
};