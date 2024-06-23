//lc 33

class Solution {
public:
    int search(vector<int>& a, int k) {
        int n = a.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (a[mid] == k) {
                return mid;
            } else if (a[low] <= a[mid]) {
                if (k >= a[low] && k <= a[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else if (a[mid] <= a[high]) {
                if (k >= a[mid] && k <= a[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};
