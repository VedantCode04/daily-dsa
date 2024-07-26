//lc 214

class Solution {
public:
    string shortestPalindrome(string s) {
        string t = s;
        reverse(begin(t), end(t));
        const string_view svt(t), svs(s);
        for (int i = 0; i < s.length(); ++i){
            if (svt.substr(i) == svs.substr(0, s.length() - i))
                return t.substr(0, i) + s;
        }
        return t + s;
    }
};

//First TLE solution
// class Solution
// {
//     string reverse(string s, int start, int end)
//     {
//         string rev = "";

//         for (int i = end; i >= start; i--)
//         {
//             rev += s[i];
//         }

//         return rev;
//     }
//     public:
//         string shortestPalindrome(string s)
//         {
//             int n = s.size();
//             if (s.size() == 1) return s;
//             int reversePoint = 1;
//             for (int i = 0; i < s.size(); i++)
//             {
//                 string str1 = reverse(s, 0, n - i - 1);
//                 string str2 = s.substr(0, n - i);

//                 if (str1 == str2)
//                 {
//                     reversePoint = n - i;
//                     break;
//                 }
//             }

//             string rev = reverse(s, reversePoint, s.size() - 1);

//             string result = rev + s;

//             return result;
//         }
// };
