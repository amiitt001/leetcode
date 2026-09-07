class Solution {
public:
void solve(string& s, int left, int right){
        if(left >= right){
         return;
        }
        swap(s[left], s[right]);
        solve(s, left+1, right-1);
    }
    bool isPalindrome(string s) {
      string cl = "";
      for(char c : s){
        if(isalnum(c)){
            cl += tolower(c);
        }
      }
      string original = cl;
      solve(cl, 0, cl.size()-1);
      if(original == cl){
        return true;
      }
      else{
        return false;
      }
    }
};