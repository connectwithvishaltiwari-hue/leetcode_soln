class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(arr.begin(), arr.end());
        // vector<int> arr1;
        // int n = arr.size();
        // int i = 0;
        // int j = n-1;
        // while(i<=j){
        //     if((arr[i] + arr[j]) == target){
        //         arr1.push_back(i);
        //         arr1.push_back(j);
        //         break;
        //     }else if(arr[i] + arr[j] > target){
        //         j--;
        //     }else{
        //         i++;
        //     }
        // }return arr1;

        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            int num = nums[i];
            int more = target - num;
            if(mpp.find(more) != mpp.end()){
                return {mpp[more], i};
            }mpp[num] = i;
        }return {-1,-1};
    }
};