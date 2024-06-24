//lc 242

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26);

        for(auto val : s){
            vec[val - 97]++;
        }

        for(auto val : t){
            vec[val - 97]--;
        }

        for(auto val : vec){
            if(val != 0){
                return false;
            }
        }

        return true;
    }
};
