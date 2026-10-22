class Solution {
public:
    void soln(vector<string> &ans, int n, string str){
        if(str.size() == n){
            ans.push_back(str);
            return;
        }
        soln(ans, n, str + "1");
        if(str.empty() || str.back() == '1'){
            soln(ans, n, str + "0");
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        soln(ans, n, "");
        return ans;
    }
};