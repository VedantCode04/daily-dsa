//leetcode premium, try on lintcode: 659
// https://www.lintcode.com/problem/659/

//time complexity = 0(n)
#include <bits/stdc++.h>
using namespace std;
#define veci(x) vector<x>
#define pushv(x) push_back(x)
#define map(x, y) map<x, y>
#define umap(x, y) unordered_map<x, y>
#define uset(x) unordered_set<x>
using namespace std;
void printVec(veci(string) a)
{
    for (auto val : a) {
        cout << val << endl;
    }
}
string encode(veci(string) strs)
{
    string res = "";
    for (int i = 0; i < strs.size(); i++) {
        string size = to_string(strs[i].size());
        res += size + "#" + strs[i];
    }

    return res;
}

void decode(string s){
    veci(string) result;
    string size = "";
    int n;
    string res = "";

    int i = 0;
    while(i < s.size()){
        while(s[i] != '#' && i < s.size()){
            size = size + s[i];
            i++;
        }
        i++;
        int n = stoi(size);
        size = "";

        int limit = i + n;
        while(i < limit && i < s.size()){
            res = res + s[i];
            i++;
        }
        result.pushv(res);
        res = "";
    }

    cout << "result vector = " << endl;
    printVec(result);
}

int main()
{
    int n;
    cin >> n;

    veci(string) v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    string str = encode(v);

    cout << str << endl;

    decode(str);
}
