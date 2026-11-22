class Solution {
public:
    bool checkString(string s) {
        int f = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                f = 0;
                break;
            }
        }return f;
    }
};