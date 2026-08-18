class Solution {
public:
    int strStr(string haystack, string needle) {
        int i= 0;
        string sub_s = "";
        for(int j = i; j<haystack.size(); j++){
           sub_s += haystack[j];
           if(j-i+1 == needle.size()){
            if(sub_s == needle){
                return i;
            }
            sub_s.erase(0, 1);
            i++;
           }
        }
        return -1;
        
    }
};