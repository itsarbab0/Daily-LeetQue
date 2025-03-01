class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0){
            return true;
        }
        if(x < 0) {
            return false;
        }
        int temp = x;
        int ans = 0;
        int dig = 0;
        while(temp != 0) {

            dig = temp % 10;
            if((ans > INT_MAX/10) || (ans <INT_MIN/10)) {
                return false;
            }
            ans = (ans*10) +dig;
            temp /= 10;
        }
        if(x == ans) {
            return true;
        }

        return false;
    }
};