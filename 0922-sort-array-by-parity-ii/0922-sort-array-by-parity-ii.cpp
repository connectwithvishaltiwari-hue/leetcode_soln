class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
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
        }
        int l1 = 0;
        int r1 = arr.size() - 1;
        while (l1 < r1){
            if(arr[l1] % 2==0 && l1%2!=0){
                int temp = arr[l1];
                arr[l1] = arr[r1];
                arr[r1] = temp;
            }l1++;
            r1--;
        }return arr;
    }
};