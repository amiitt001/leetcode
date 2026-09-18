class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        int n2 = nums.size();
        for(int i = 0; i< n-n2; i++){
            nums.push_back(0);
        }
        
    }
};