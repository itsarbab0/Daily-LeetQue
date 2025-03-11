class Solution {
public:
    int myAtoi(string s) {
        if(s.length() == 0)
        {
            return 0;
        }
        int i = 0, size = s.length();
        while(i < size && s[i] == ' ')
        {
            i++;
        }

        s = s.substr(i);
        int sign = 1;
        long ans = 0;
        if(s[0] == '-')
        {
            sign = -1;
        }
        int max = INT_MAX, min = INT_MIN;
        if(s[0] == '+' || s[0] == '-')
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
        while(i < size)
        {
            if(s[0] == ' ' || !isdigit(s[i]))
            {
                break;
            }
            ans = ans * 10 + (s[i] - '0');
            if(sign == -1 && (-1)*ans < INT_MIN)
            {
                return INT_MIN;
            }
            if(sign == 1 && ans > INT_MAX)
            {
                return INT_MAX;
            }
            i++;
        }

        return sign * ans;
    }
};