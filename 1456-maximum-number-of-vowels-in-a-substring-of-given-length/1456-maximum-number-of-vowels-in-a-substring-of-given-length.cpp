class Solution {
public:
    int maxVowels(string s, int k) {
        int max = 0;
        int n = s.size();
        int vow_max = 0;
        string s1 = s.substr(0, k);
        for (int i = 0; i < k; i++){
            if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'){
                max++;
            }
        }
        vow_max = max;
        for (int i = k; i < n; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                max++;
            }
            if (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                max--;
            }
            if (vow_max <  max){
                vow_max = max;
            }
        }return vow_max;
    }
};