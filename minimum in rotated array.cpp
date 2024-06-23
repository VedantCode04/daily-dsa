//lc 153

class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
    int mini = INT_MAX;
	int low = 0, high = n-1;

	while(low <= high){
		int mid = (low+high)/2;

		if(a[low] < a[high]){
			mini = min(mini, a[low]);
			low = mid + 1;
		} else if (a[mid] >= a[low]){
			mini = min(mini, a[low]);
			low = mid + 1;
		} else if (a[mid] <= a[high]){
			mini = min(mini, a[mid]);
			high = mid - 1;
		}
	}

    return mini;
    }
};
