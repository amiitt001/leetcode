class Solution
{
    public:

        int solve(vector<int> &nums, int i, int sum, int target)
            {
                if (i == nums.size())
                {
                    if (target - sum == 0)
                    {
                        return 1;
                    }
                    return 0;
                }
                int add = solve(nums, i + 1, sum + nums[i], target);
                int sub = solve(nums, i + 1, sum - nums[i], target);
                return add + sub;
            }
            int findTargetSumWays(vector<int> &nums, int target)
            {
                return solve(nums, 0, 0, target);
            }
        };