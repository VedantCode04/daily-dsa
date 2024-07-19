//lc 49
// using character map to track frequencies of each word in the string and then adding into map as needed
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        map<vector<int>, vector<string>> Map;
        int n = a.size();

        for(int i = 0; i < n; i++){
            vector<int> temp(26, 0);
            for(int j = 0; j < a[i].size(); j++){
                temp[a[i][j] - 'a']++;
            }

            Map[temp].push_back(a[i]);
        }

        vector<vector<string>> result;

        for(auto vec: Map){
            result.push_back(vec.second);
        }

        return result;
    }
};
