//lc 451
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(auto c: s) freq[c]++;

        priority_queue<pair<int, char>> maxheap;

        for(auto val: freq) maxheap.push({val.second, val.first});
        string result = "";
        while(!maxheap.empty()){
            auto temp = maxheap.top();
            maxheap.pop();
            result += string(temp.first, temp.second);
        }

        return result;
    }
};
// class Solution {
// public:
//     string frequencySort(string s) {
//         map<char, int> m;
//         multimap<int, char> n;
//         ostringstream oss;
//         for (char c : s) {
//             m[c]++;
//         }
//         for (auto val : m) {
//             n.insert({val.second, val.first});
//         }
//         for (auto val : n) {
//             int count = val.first;
//             while (count--) {
//                oss << val.second;
//             }
//         }
//         string res = oss.str();
//         reverse(res.begin(), res.end());
//         return res;
//     }
// };
