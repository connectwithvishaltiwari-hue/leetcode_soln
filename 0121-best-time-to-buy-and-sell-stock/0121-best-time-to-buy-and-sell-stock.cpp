class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int i = 0;
        int j = 1;
        int buy = 0;
        int profit = 0;
        while(j<(arr.size())){
            if (arr[i] > arr[j]){
                i = j;
                j++;
            }else{
                
                buy = (arr[j]-arr[i]);
                if (profit < buy){
                    profit = buy;
                }
                j++;
            
            }
        }return profit;
    }
};