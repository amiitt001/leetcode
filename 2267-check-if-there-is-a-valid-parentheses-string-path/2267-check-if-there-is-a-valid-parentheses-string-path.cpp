class Solution {
public:
    vector<vector<vector<int>>> dp;

    bool solve(vector<vector<char>>& grid, int i, int j, int count) {
        int m = grid.size();
        int n = grid[0].size();

        if (count < 0) {
            return false;
        }

        count += (grid[i][j] == '(') ? 1 : -1;

        if (count < 0) {
            return false;
        }

        if (i == m - 1 && j == n - 1) {
            return count == 0;
        }

        if (dp[i][j][count] != -1) {
            return dp[i][j][count];
        }

        bool result = false;

   
        if (i + 1 < m) {
            if (solve(grid, i + 1, j, count)) {
                result = true;
            }
        }

      
        if (j + 1 < n) {
            if (solve(grid, i, j + 1, count)) {
                result = true;
            }
        }

        dp[i][j][count] = result;

        return result;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if ((m + n - 1) % 2 != 0) {
            return false;
        }

       
        dp.assign(
            m,
            vector<vector<int>>(
                n,
                vector<int>(m + n + 1, -1)
            )
        );

        return solve(grid, 0, 0, 0);
    }
};