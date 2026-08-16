class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int i = 0;
        int c_len = 0;
        int max_len = INT_MIN;
        unordered_map<int, int> freq;
        for(int j = i; j < n; j++){
            
            freq[fruits[j]]++;
            while(freq.size() >2){

                freq[fruits[i]]--;

                if(freq[fruits[i]] == 0) {
                    freq.erase(fruits[i]);
                }

                i++;
            }
            max_len = max(max_len, j - i + 1);
            
        }
        return max_len;

        
    }
};