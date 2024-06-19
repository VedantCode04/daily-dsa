//lc 1
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n = a.size();
        unordered_map<int, int> umap;
        int x, y;

        for (int i = 0; i < n; i++) {
            if (umap.find(k - a[i]) != umap.end()) {
                x = umap[k - a[i]];
                y = i;
                break;
            }
            if (umap.find(a[i]) == 0) {
                umap[a[i]] = i;
            }
        }

        return {x, y};
    }
};
