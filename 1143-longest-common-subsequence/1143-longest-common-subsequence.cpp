class Solution
{
    public:
        string text1;
    string text2;
    vector<vector < int>> dp;

    int solve(int idx1, int idx2)
    {
        if (idx1 < 0 || idx2 < 0)
        {
            return 0;
        }
        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];

        if (text1[idx1] == text2[idx2])
        {
            return dp[idx1][idx2] = 1 + solve(idx1 - 1, idx2 - 1);
        }

        return dp[idx1][idx2] = max(solve(idx1 - 1, idx2),
            solve(idx1, idx2 - 1)
       );
    }

    int longestCommonSubsequence(string text1, string text2)
    {
        this->text1 = text1;
        this->text2 = text2;
        int n = text1.size();
        int m = text2.size();
        dp = vector<vector < int>> (n, vector<int> (m, -1));
        return solve(text1.size() - 1, text2.size() - 1);
    }
};