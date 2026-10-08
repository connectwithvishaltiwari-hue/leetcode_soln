class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')){
                return false;
            }
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            if(!st.empty() && (st.top() == '(' && (s[i] == ']' || s[i] == '}'))){
                return false;
            }
            else if(!st.empty() && (st.top() == '[' && (s[i] == ')' || s[i] == '}'))){
                return false;
            }
            else if(!st.empty() && (st.top() == '{' && (s[i] == ')' || s[i] == ']'))){
                return false;
            }
            if(st.top() == '(' && s[i] == ')'){
                st.pop();
            }else if(st.top() == '{' && s[i] == '}'){
                st.pop();
            }else if(st.top() == '[' && s[i] == ']'){
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }
};