class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s1;
        int n = s.size() - 1;
        s1.push(s[n]);
        for(int i = n-1; i >= 0; i--){
            if(!s1.empty() && s1.top() == s[i]){
                s1.pop();
            }else{
                s1.push(s[i]);
            }
        }string s2 = "";
        while(!s1.empty()){
            s2+=s1.top();
            s1.pop();
        }return s2;
    }
};