class Solution {
private:
    
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;  
    }
public:

    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0; 
        int maxLength = 1;  
        
        for (int i = 0; i < s.length(); ++i) {
            
            int len1 = expandAroundCenter(s, i, i);
            
            int len2 = expandAroundCenter(s, i, i + 1);
            
            int len = max(len1, len2);
            if (len > maxLength) {
                maxLength = len;
                start = i - (maxLength - 1) / 2;  
            }
        }
        
        return s.substr(start, maxLength);
    }


};
