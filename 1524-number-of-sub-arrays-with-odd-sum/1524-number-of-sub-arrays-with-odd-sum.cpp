
class Solution {
public:
    long long numOfSubarrays(vector<int>& num) {
        long long odd = 0;
        long long even = 1;
        int sum = 0;

        for(int i = 0; i < num.size(); i++){
            sum = sum + num[i];

            if(sum % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        // long long a = odd * even;
        return (odd * even) % 1000000007;;
    }
};
