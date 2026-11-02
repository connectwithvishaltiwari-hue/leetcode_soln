class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        
        for(int i = 0; i < strs[0].size(); i++){
            prefix += strs[0][i];
        }int n = prefix.size();
        for(int i = 1; i < strs.size(); i++){
            int count = 0;
            for(int j = 0;  j < strs[i].size(); j++){
                if(strs[i][j] == prefix[j]){
                    count++;
                }else{
                    break;
                }
            }if(count < n){
                n = count;
            }
        }prefix.erase(n);
        return prefix;
    }
};