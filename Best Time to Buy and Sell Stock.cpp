//lc 121

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int buy = 0;
        int maxi = 0;

        for(int i = 0; i < a.size(); i++){
            if(a[i] > a[buy]){
                maxi = max(maxi, a[i] - a[buy]);
            }

            if(a[i] < a[buy]){
                buy = i;
            }
        }

        return maxi;
    }
};
