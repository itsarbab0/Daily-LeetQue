#include<cmath>
#include<climits>
class Solution {
public:
    int reverse(int x) {
        if(x == 0){
            return 0;
        }
        int ans = 0;
        int digit = 0;
        while(x != 0) {
            digit = x % 10;

            if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
                return 0;
            }

            ans = (ans * 10) + digit;
            x = x / 10;
        }

        return ans;
    }
};