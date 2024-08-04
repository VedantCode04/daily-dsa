//lc 167

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n = a.size();
        int i = 0, j = n - 1;

        while (i < j) {
            int sum = a[i] + a[j];
            if (sum == k)
                return {i+1, j+1};
            else if (sum > k) {
                j--;
            } else if (sum < k) {
                i++;
            }
        }
        return {-1, -1};
    }
};
