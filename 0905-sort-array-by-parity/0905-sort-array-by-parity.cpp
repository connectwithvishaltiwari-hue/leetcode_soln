class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int l = 0;
        int r = arr.size() - 1;
        while(l < r){
            if (arr[l]%2 != 0 && arr[r]%2==0){
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                l++;
                r--;
            }else if (arr[l]%2 == 0){
                l++;
            }else if(arr[r]%2 != 0){
                r--;
            }
        }return arr;
    }
};