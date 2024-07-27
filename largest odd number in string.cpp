// lc 1903

class Solution {
public:
    string largestOddNumber(string s) {
        int index = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            int n = c - '0';
            if (n % 2 != 0) {
                index = i;
                break;
            }
        }
        return s.substr(0, index + 1);
    }
};
