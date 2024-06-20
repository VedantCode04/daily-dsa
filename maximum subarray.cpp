//lc 53
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        int maxi = INT_MIN;

        for(int i = n-1; i >= 0; i--){
            sum = sum + a[i];
            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};
