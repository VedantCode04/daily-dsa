//lc 9
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long ans = 0;
        while(temp > 0){
            int rem = temp % 10;
            ans = ans*10 + rem;
            temp = temp/10;
        }

        if(ans == x) return true;
        return false;
    }
};
// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//         string s = to_string(x);
//         int n = s.size();
//         for(int i = 0; i < n/2; i++){
//             if(s[i] != s[n-i-1]) return false;
//         }

//         return true;
//     }
// };
