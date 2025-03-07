class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0)
        {
            return 0;
        }
        if(needle.length() > haystack.length())
        {
            return -1;
        }
        
        for(int i = 0; i < haystack.length(); i++){
            bool flag = true;
            for(int j = 0; j < needle.length(); j++)
            {
                if(haystack[i + j] != needle[j])
                {
                    flag = false;
                    break;
                }
            } 
            if(flag)
            {
                return i;
            }
        }
        return -1;
    }
};