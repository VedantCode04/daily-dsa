//lc 20

class Solution
{
    bool isOpening(char c)
    {
        return c == '{' || c == '(' || c == '[';
    }

    bool isClosing(char c)
    {
        return c == ')' || c == ']' || c == '}';
    }

    public:
        bool isValid(string s)
        {
            stack<char> sol;

            for (auto c: s)
            {
                if (isOpening(c))
                {
                    sol.push(c);
                }
                else if (isClosing(c) || sol.empty())
                {
                    if (sol.empty()) return false;
                    else if (sol.top() == '{' && c == '}' ||
                        sol.top() == '(' && c == ')' ||
                        sol.top() == '[' && c == ']'
                   ) sol.pop();
                    else return false;
                }
            }

            if (sol.empty()) return true;
            return false;
        }
};
