//lc 217
class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_map<int, int> sol;

        for(int i = 0; i < a.size(); i++){
            if(sol.find(a[i]) == sol.end()){
                sol[a[i]]++;
                continue;
            }

            if(sol.find(a[i]) != sol.end()){
                if(sol[a[i]] > 0){
                    return true;
                }
            }
        }

        return false;
    }
};
