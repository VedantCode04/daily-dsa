//lc 1021
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int op = 0, cl = 0;
        for (auto c : s) {
            if (op > cl) {
                result += c;
            }
            c == '(' ? op++ : cl++;
            if (op == cl) {
                result.pop_back();
            }
        }

        return result;
    }
};
