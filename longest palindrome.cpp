//lc 5

//optimized solution

class Solution
{
    int start = 0, maxLen = 1;

    void checkPalindrome(string &s, int left, int right){
        while(left >= 0 && right <= s.size()-1 && s[left] == s[right]){
            left--;
            right++;
        }

        left++;
        right--;

        if(right - left + 1 > maxLen){
            start = left;
            maxLen = right - left + 1;
        }
    }
    public:
        string longestPalindrome(string s)
        {
            if(s.size() == 0) return "";
            string result = "";
            for(int i =0 ; i < s.size(); i++){
                checkPalindrome(s, i, i);
                checkPalindrome(s, i, i+1);
            }
            result = s.substr(start, maxLen);
            return result;
        }
};

//my own solution
//status: accepted

// class Solution
// {
//     vector<int> checkPalindrome(string s, int left, int right)
//     {
//         while (left >= 0 && right <= s.size() - 1 && s[left] == s[right])
//         {
//             left--;
//             right++;
//         }
//         return {
//             left+1,
//             right-1
//         };
//     }
//     public:
//         string longestPalindrome(string s)
//         {
//             int n = s.size();
//             vector<int> length = { 0,
//                 0
//             };
//             string result = "";
//             for (int i = 0; i < n; i++)
//             {
//                 vector<int> oddLength = checkPalindrome(s, i, i);
//                 vector<int> evenLength = checkPalindrome(s, i, i + 1);

//                 int oddL = oddLength[1] - oddLength[0];
//                 int evenL = evenLength[1] - evenLength[0];
//                 int l = length[1] - length[0];
//                 if (oddL > evenL && l < oddL)
//                 {
//                     length = oddLength;
//                 }
//                 else if (oddL < evenL && l < evenL)
//                 {
//                     length = evenLength;
//                 }
//                 else if (oddL == evenL && l < oddL)
//                 {
//                     length = evenLength;
//                 }
//             }

//             for(int i = length[0]; i <= length[1]; i++){
//                 result += s[i];
//             }

//             return result;
//         }
// };
