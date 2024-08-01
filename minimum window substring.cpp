// lc 76

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        unordered_map<char, int> freq;

        for(char c: t) freq[c]++;

        int start = 0, end = 0, minLen = INT_MAX, count = m, startInd = -1;

        while(end < n){
            freq[s[end]]--;
            if(freq[s[end]] >= 0){
                count--;
            }
            end++;
            while(count == 0){
                if(minLen > end - start){
                    startInd = start;
                    minLen = end - start;
                }

                freq[s[start]]++;
                start++;
                if(freq[s[start-1]] > 0) count++;
            }
        }

        string result = "";
        if(minLen == INT_MAX){
            result = "";
        } else {
            result = s.substr(startInd, minLen);
        }
        return result;
    }
};
