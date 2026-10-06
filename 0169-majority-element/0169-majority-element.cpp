class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int ele;
        // int c = 0;
        // for (int i = 0; i<nums.size(); i++){
        //     if(c == 0){
        //         ele = nums[i];
        //         c=1;
        //     }else if(ele == nums[i]){
        //         c++;
        //     }else{
        //         c--;
        //     }
        // }return ele;
        unordered_map<int, int>hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }int max1 = 0;
        int ele = 0;
        for(auto it:hash){
            if(it.second > max1){
                max1 = it.second;
                ele = it.first;
            }
        }
        return ele;
    }
};