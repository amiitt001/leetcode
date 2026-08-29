class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(char ch : t){
            if(i <s.size() && ch == s[i]){
                i++;
            }
        }
        return i == s.size();
    }
};