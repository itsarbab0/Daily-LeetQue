class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) 
        {
            return INT_MAX; 
        }
        
        if (divisor == INT_MIN) 
        {
            return (dividend == INT_MIN) ? 1 : 0;
        }
        
        if (dividend == 0) 
        {
            return 0;
        }

        bool negative = (dividend < 0) ^ (divisor < 0); 

        long long num = abs((long long)dividend);  
        long long d = abs((long long)divisor);     
        long long ans = 0;

        while (num >= d) 
        {
            int count = 0;
            while (num >= (d << (count + 1)))
            { 
                count++;
            }
            ans += (1LL << count);
            num -= (d << count);
        }

        if (ans > INT_MAX) {
            return negative ? INT_MIN : INT_MAX; 
        }

        return negative ? -ans : ans; 
    }
};
