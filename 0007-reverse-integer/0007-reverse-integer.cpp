class Solution {
public:
    int reverse(int x) {
        int MAX = INT_MAX;
        int MIN = INT_MIN;
        int sign;
        if (x<0){
          sign  = -1;
        } 
            
        else {
            sign = 1;
        }

        int reverse_num = 0;
        long long n = x;
        if (n < 0) n = -n;
        while(n>0){
            int rem = n%10;
            n = n/10;
            if (reverse_num > (MAX-rem)/10){
                return 0;
            }
            reverse_num = reverse_num *10 + rem;

        }
       return reverse_num*sign;
        
    }
};