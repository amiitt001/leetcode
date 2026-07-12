class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()){
            return false;
        }
        unordered_map<char, int> ransom_freq,magazine_freq;
        for(char ch : ransomNote){
            ransom_freq[ch]++;
        }
        for(char ch : magazine){
            magazine_freq[ch]++;
        }

        for (auto it : ransom_freq) {
            if (magazine_freq[it.first] < it.second){
                 return false;
            }
        }
        return true;
                
}


        
    
};