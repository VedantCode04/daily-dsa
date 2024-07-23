//lc 151

class Solution
{
    public:
        string reverseWords(string s)
        {
            int left = 0, right = s.size() - 1;

            while (s[left] == ' ')
                left++;
            while (s[right] == ' ')
                right--;
            string result = "", temp = "";
            for (int i = left; i <= right; i++)
            {
                if (s[i] != ' ')
                {
                    temp = temp + s[i];
                }
                else if (s[i] == ' ')
                {
                    if (result == "")
                    {
                        result = temp;
                    }
                    else
                    {
                        result = temp + " " + result;
                    }

                    while (s[i] == ' ' && s[i + 1] == ' ') i++;
                    temp = "";
                }
            }

            if (temp != "")
            {
                result = temp + " " + result;
            }
            else if (result == "")
            {
                result = temp;
            }
            if (result[result.size() - 1] == ' ')
            {
                result.pop_back(); // to remove last space
            }

            return result;
        }
};
