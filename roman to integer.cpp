//lc 13

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> sol;
        sol['I'] = 1;
        sol['V'] = 5;
        sol['X'] = 10;
        sol['L'] = 50;
        sol['C'] = 100;
        sol['D'] = 500;
        sol['M'] = 1000;

        char last = s[s.size()-1];
        int result = sol[last];
        for(int i = s.size()-2; i >= 0; i--){
            if(sol[s[i]] >= sol[last]){
                result = result + sol[s[i]];
            } else{
                result = result - sol[s[i]];
            }
            last = s[i];
        }

        return result;
    }
};
