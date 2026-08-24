class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        int last_digit;
        while(n!=0){
            last_digit = n%10;
            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev = rev * 10 + last_digit;
            n = n /10;
        }return (int)rev;
    }
};