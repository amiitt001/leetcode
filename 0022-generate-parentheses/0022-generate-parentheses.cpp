class Solution
{
public:

    vector<string> res;
    string current;

    void backtrack(int openN, int closeN, int n)
    {
        if (openN == n && closeN == n)
        {
            res.push_back(current);
            return;
        }

        if (openN < n)
        {
            current.push_back('(');
            backtrack(openN + 1, closeN, n);
            current.pop_back();
        }

        if (closeN < openN)
        {
            current.push_back(')');
            backtrack(openN, closeN + 1, n);
            current.pop_back();
        }
    }

    vector<string> generateParenthesis(int n)
    {
        res.clear();
        current.clear();

        backtrack(0, 0, n);

        return res;
    }
};