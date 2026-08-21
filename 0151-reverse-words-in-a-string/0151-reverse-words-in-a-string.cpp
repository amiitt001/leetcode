class Solution
{
    public:
        string reverseWords(string s)
        {
            vector<string> arr;
            string word = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    word += s[i];
                }
                else
                {
                    if (word != "")
                    {
                        arr.push_back(word);
                         word = "";
                    }
                }
            }
            if (word != "")
            {
                arr.push_back(word);
               
            }

            reverse(arr.begin(), arr.end());
            string ans = "";
            for (int i = 0; i < arr.size(); i++)
            {
                ans += arr[i];
                if (i != arr.size() - 1)
                {
                    ans += ' ';
                }
            }
            return ans;
        }
};