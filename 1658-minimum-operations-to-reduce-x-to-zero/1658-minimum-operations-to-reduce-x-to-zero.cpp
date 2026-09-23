class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int max_len = -1;
        int total = 0;
        for(int num : nums){
            total +=num;
        }
        int target = total-x;
        if(target == 0){
            return n;
        }

        int sum = 0;
        int i =0;
        for(int j= i; j<n; j++){
           sum += nums[j];

           while(sum > target && j>= i){

            sum -= nums[i];
            i++;
           }

             if(sum == target){
               max_len = max(max_len, j-i+1);
             }
           
           
           
        }
        return max_len == -1 ? -1 : n- max_len;
        
    }
};