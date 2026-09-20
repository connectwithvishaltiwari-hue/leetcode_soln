class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele;
        int c = 0;
        for (int i = 0; i<nums.size(); i++){
            if(c == 0){
                ele = nums[i];
                c=1;
            }else if(ele == nums[i]){
                c++;
            }else{
                c--;
            }
        }return ele;
    }
};