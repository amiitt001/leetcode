class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int>freq_s, freq_t;
    for(char ch: s){
        freq_s[ch]++;
    }
    for(char ch: t){
        freq_t[ch]++;
    }
    
    if(freq_t == freq_s){
        return true;
    }
    else{
        return false;
    }
        
    }
};