class Solution {
public:
    int count = 0;
    int solve(int n){
        if(n == 0){
            return 0;
        }
        return n%2 + solve(n/2);
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i =0; i<= n; i++){
        ans.push_back(solve(i));
        }
        return ans;
    }
};