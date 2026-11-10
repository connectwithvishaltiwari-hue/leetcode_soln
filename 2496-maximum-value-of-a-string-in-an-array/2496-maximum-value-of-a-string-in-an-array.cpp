
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max1 = 0;

        for (int i = 0; i < strs.size(); i++) {
            bool isNumber = true;

            for (char ch : strs[i]) {
                if (!isdigit(ch)) {
                    isNumber = false;
                    break;
                }
            }

            if (isNumber) {
                max1 = max(max1, stoi(strs[i]));
            } else {
                max1 = max(max1, (int)strs[i].length());
            }
        }

        return max1;
    }
};
