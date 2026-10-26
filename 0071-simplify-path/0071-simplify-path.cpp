class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string word;
        vector<string> arr;

        while (getline(ss, word, '/')) {
            arr.push_back(word);
        }
        stack<string> st;
        for (int i = 0; i < arr.size(); i++) {
           
            if (arr[i] == "." || arr[i] == "") {
                continue;
            } else if (arr[i] == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(arr[i]);
            }
        }
        stack<string> new1;
        while (!st.empty()) {
            new1.push(st.top());
            st.pop();
        }
        string simple = "/";
        while (!new1.empty()) {
            simple += new1.top();
            new1.pop();
            if(!new1.empty())
            simple += "/";
        }return simple;
    }
};