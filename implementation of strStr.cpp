//lc 28

class Solution {
public:
    int strStr(string haystack, string needle) {
        int result = -1;

        if(needle.length() > haystack.length()) return -1;

        for(int i = 0; i <= haystack.length() - needle.length(); i++){
            if(haystack[i] == needle[0]){
                result = i;
                int flag = 1;
                for(int j = 0; j < needle.length();j++ ){
                    if(haystack[i+j] != needle[j]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0) result = -1;
                else break;
            }
        }
        return result;
    }
};
