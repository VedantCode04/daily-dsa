//lc 11

class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();

        int maxArea = 0;
        int i = 0, j = n-1;
        while(i < j){
            maxArea = max(maxArea, min(a[i], a[j])*(j-i));
            if(a[i] < a[j]){
                i++;
            } else if (a[i] > a[j]){
                j--;
            } else {
                i++;
                j--;
            }
        }

        return maxArea;
    }
};
