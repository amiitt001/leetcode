class Solution
{
    public:
        bool checkDivisibility(int n)
        {
            int d_sum = 0;
            int d_pro = 1;
            int T_sum = 0;
            int original = n;
            while (n > 0)
            {
                int rem = n % 10;

                d_sum += rem;
                d_pro *= rem;
                n = n / 10;
            }
            T_sum = d_sum + d_pro;
            if (original % T_sum != 0)
            {
                return false;
            }else{
               return true;
            }
            
        }
};