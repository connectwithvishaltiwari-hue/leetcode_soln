class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int c = 0;
        int i = n-1;
        while(s[i]== ' '){
            i--;
        }for(int j = i; j >= 0; j--){
            if(s[j]==' '){
                break;
            }c++;
        }return c;
    }
};