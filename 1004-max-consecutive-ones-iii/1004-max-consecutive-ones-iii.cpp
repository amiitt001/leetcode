class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int max_len = 0;
        unordered_map<int, int> mp;
        for(int j= i; j<n; j++){
            mp[nums[j]]++;
            while(mp[0]>k){
                mp[nums[i]]--;
                i++;
            }
            max_len = max(max_len, j-i+1);
        }
        return max_len;
        
    }
};