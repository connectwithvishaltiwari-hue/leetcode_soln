class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> str = {"0", "1", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string str1;
        int pos = 0;
        solve(digits, str, ans, str1, pos);
        return ans;
        
    }
    void solve(string digits, vector<string> &str, vector<string> &ans, string &str1, int pos){
        if(str1.size() == digits.size()){
            ans.push_back(str1);
            return;
        }
        string curr = str[digits[pos]-'0'];
        for(int i = 0; i < curr.size(); i++){
            str1.push_back(curr[i]);
            solve(digits, str, ans, str1, pos+1);
            str1.pop_back();
        }
        
    }
};