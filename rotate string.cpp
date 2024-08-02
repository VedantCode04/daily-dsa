//lc 796

class Solution {

public:
    bool rotateString(string s, string t) {
        if (s.length() != t.length())
            return false;
        if (s == t)
            return true;

        int n = s.length();
        int temp = n;

        while (temp > 0) {
            if (s == t)
                return true;
            s = s.substr(1, n - 1) + s[0];
            temp--;
        }

        return false;
    }
};
