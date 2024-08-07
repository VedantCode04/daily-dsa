//lc 1880
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        unordered_map<char, int> value;
        for (char i = 'a'; i <= 'z'; i++) {
            value[i] = i - 'a';
        }

        string firstVal = "", secondVal = "", targetVal = "";

        for (char c : firstWord) {
            firstVal += to_string(value[c]);
        }

        for (char c : secondWord) {
            secondVal += to_string(value[c]);
        }

        for (char c : targetWord) {
            targetVal += to_string(value[c]);
        }

        int fv = stoi(firstVal), sv = stoi(secondVal), tv = stoi(targetVal);
        cout << fv << " " << sv << " " << tv << endl;
        if (fv + sv == tv) {
            return true;
        }
        return false;
    }
};
