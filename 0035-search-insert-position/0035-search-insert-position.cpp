class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l = 0;
        int r = arr.size() - 1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid] == target){
                return mid;
            }else if(arr[mid] < target){
                l = mid + 1;
            }else if(arr[mid] > target){
                r = mid-1;
            }
        }return l;
    }
};