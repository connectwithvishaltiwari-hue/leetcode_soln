class Solution {
public:
    bool isPalindrome(int n) {
        int org = n;
        int rev = 0;
        if (n>=0){
            while(n!=0){
                int last_digit = n%10;
                if (rev > INT_MAX/10 || rev < INT_MIN/10){
                    return false;
                }
                rev = last_digit + rev * 10;
                n = n /10;
            }
            if (org == rev){
                return true;
            }else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};