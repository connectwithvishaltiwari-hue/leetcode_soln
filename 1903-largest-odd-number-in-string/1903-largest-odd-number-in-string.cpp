class Solution {
public:
    string largestOddNumber(string num) {
        int n = -1;
        for(int i = num.size() - 1; i >= 0; i--){
            if((int)num[i] % 2 != 0){
                n = i;
                break;
            }
        }if(n == -1){
            return "";
        }
        num.erase(n+1);
        return num;
        
    }
};