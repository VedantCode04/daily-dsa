//lc 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.size() == 1 ){
            return s[0];
        }

        sort(s.begin(), s.end());

        string firstStr = s[0], lastStr = s[s.size()-1];
        int i = 0;
        while(i < firstStr.size() && firstStr[i] == lastStr[i]){
            i++;
        }
        return firstStr.substr(0, i);
    }
};
