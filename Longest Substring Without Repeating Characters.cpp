//lc 3

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> sol;
        int j = 0, maxi = 0, i = 0;
        for (i = 0; i < n; i++) {
            if (sol.find(s[i]) != 0) {
                if(sol[s[i]] + 1 > j){
                    j = sol[s[i]] + 1;
                }
            }
            maxi = max(maxi, i - j + 1);

            sol[s[i]] = i;
        }

        return maxi;
    }
};
