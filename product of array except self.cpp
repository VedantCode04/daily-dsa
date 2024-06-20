//lc 238

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> ans;
        //maintain a count of zeros, if c = 1, then only track the index of 
      //that zero and take an extra variable such that it 
      //doesnt multiply with the zero. if c > 1, then whole array is 0
        int sum1 = 1;
        int sum2 = 1;
        int countZero = 0;

        for(int i = 0; i < n; i++){
            a[i] == 0 ? countZero++ : sum2 *= a[i];
            sum1 *= a[i];
        }
        
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                ans.push_back(sum1/a[i]);
            } else{
                if(countZero == 1){
                    ans.push_back(sum2);
                } else {
                    ans.push_back(0);
                }
            }
                
        }
        return ans;
    }
};
