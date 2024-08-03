//lc 1781
class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        string temp = "";
        int n = s.size();
        for (int i = 0; i < s.size(); i++) {
            vector<int> mapp(26, 0);
            int maxi = 0, mini = INT_MAX;
            for (int j = i; j < n; ++j) {
                int pos = s[j] - 'a';
                mapp[pos]++;
                maxi = max(maxi, mapp[pos]);
                mini = INT_MAX;
                for (int k = 0; k < 26; ++k) {
                    if (mapp[k] > 0) {
                        mini = min(mini, mapp[k]);
                    }
                }
                sum += maxi - mini;
            }
        }
        return sum;
    }
};
