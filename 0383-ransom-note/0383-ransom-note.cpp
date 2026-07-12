class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()){
            return false;
        }
        unordered_map<char, int> freq;
        for(char ch : magazine){
            freq[ch]++;
        }

        for (auto ch : ransomNote) {
            if(freq[ch] <= 0){
                return false;
            }
            freq[ch]--;
        }
        return true;
                
}    
    
};