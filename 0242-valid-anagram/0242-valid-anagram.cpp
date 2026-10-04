class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(128);
        vector<int> arr1(128);
        for(int i = 0; i < s.size(); i++){
            arr[(int)s[i]]++;
        }
        for(int i = 0; i < t.size(); i++){
            arr1[(int)t[i]]++;
        }
        int a = 1;
        for(int i = 0; i < 128; i++){
            if(arr[i] != arr1[i]){
                a = 0;
            }
        }if(a==1){
            return true;
        }return false;
    }
};