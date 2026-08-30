class Solution
{
    public:
        int minimumDeletions(vector<int> &nums)
        {
            int n = nums.size();

            int min_num = INT_MAX;
            int max_num = INT_MIN;

            int min_idx = -1;
            int max_idx = -1;

            for(int i = 0; i<n;i++){
                if(nums[i] > max_num){
                    max_num = nums[i];
                    max_idx = i;
                }
                if(nums[i] < min_num){
                    min_num = nums[i];
                    min_idx = i;
                }
            }
            if(min_idx > max_idx){
                swap(min_idx, max_idx);
            }
            int left = max_idx + 1;
            int right = n- min_idx;
            int both = (min_idx+1)+ (n-max_idx);
            return min({left , right, both});
        }
};