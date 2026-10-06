class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int max2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                c++;
            }else{
                if(max2 < c){
                    max2 = c;
                }c = 0;
            }
        }int max1 = max(max2, c);
        return max1;
    }
};