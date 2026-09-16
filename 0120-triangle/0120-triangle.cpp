class Solution {
public:

    int solve(vector<vector<int>>& triangle, int i, int j,
              vector<vector<int>>& dp) {

        if (i == triangle.size() - 1) {
            return triangle[i][j];
        }

        if (dp[i][j] != INT_MAX) {
            return dp[i][j];
        }

        int left = solve(triangle, i + 1, j, dp);
        int right = solve(triangle, i + 1, j + 1, dp);

        return dp[i][j] = triangle[i][j] + min(left, right);
    }

    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        return solve(triangle, 0, 0, dp);
    }
};