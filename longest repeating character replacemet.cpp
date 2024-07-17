//lc 424

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int charmap[26] = {0};

        int maxLen = 0, maxi = 0;

        int left = 0, right = 0;

        while(right < n){
            charmap[s[right] - 'A']++;
            maxi = max(maxi, charmap[s[right] - 'A']);
            if((right - left + 1) - maxi > k){
                charmap[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};
