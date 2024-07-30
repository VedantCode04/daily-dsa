//lc 205

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char, char> sol1;
        unordered_map<char, char> sol2;
        for (int i = 0; i < n; i++) {
            if (sol1.find(s[i]) == 0) {
                sol1[s[i]] = t[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (sol2[t[i]] == 0) {
                sol2[t[i]] = s[i];
            }
        }
        int flag = 1;
        for (int i = 0; i < n; i++) {
            if (sol1[s[i]] != t[i] || sol2[t[i]] != s[i]) {
                flag = 0;
                break;
            }
        }
        return flag;
    }
};
