
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int> result(n,1);

        for (int i = 1; i < n; i++) {
            // int multi = 1;

            // for (int j = 0; j < nums.size(); j++) {
            //     if (j == i) {
            //         continue;
            //     }
            //     multi *= nums[j];
            // }


            // result[i] = multi;
            result[i] = result[i-1]*nums[i-1];
        }
        int suffix = 1;
        for(int i= n-1; i>=0; i--){
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};
