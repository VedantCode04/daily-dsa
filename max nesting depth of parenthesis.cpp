//lc 1614
class Solution {
public:
    int maxDepth(string s) {
        int count = 0, maxi = 0;
        for(auto c: s){
            if(c == '('){
                count++;
                maxi = max(maxi, count);
            } else if (c == ')'){
                count--;
            }
        }
        return maxi;
    }
};
