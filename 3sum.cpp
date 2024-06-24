//lc 15

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();

        sort(a.begin(), a.end());
        int i = 0, j = i+1, k = n-1;
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            if(i != 0 && a[i-1] == a[i]){
                continue;
            }

            int j = i + 1, k = n-1;

            while(j < k){
                int sum = a[i] + a[j] + a[k];

                if(sum < 0){
                    j++;
                } else if (sum > 0){
                    k--;
                } else {
                    ans.push_back({a[i], a[j], a[k]});
                    j++; k--;

                    while(a[j] == a[j-1] && j < k) j++;
                    while(a[k] == a[k+1] && k > j) k--;
                }
            }
        }

        return ans;
    }
};
