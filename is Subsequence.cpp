//lc 392
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length() < s.length()) return false;
        int n = t.length();
        int count = s.length();
        int i = 0, j = 0;
        while(i < n){
            if(s[j] == t[i]){
                j++;
                count--;
            }
            i++;
        }
        if(count == 0) return true;
        return false;
    }
};
