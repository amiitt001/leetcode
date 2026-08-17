class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int count_s[26] = {0};
        int count_t[26] = {0};
        for(int i = 0; i<s.size(); i++){
            count_s[s[i] - 'a']++;
            count_t[t[i] - 'a']++;
        }
        for(int i = 0; i<s.size(); i++){
            if(count_s[s[i]- 'a'] != count_t[s[i] - 'a']){
                return false;
            }
            
        }
        return true;
    }
};