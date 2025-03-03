#include<stack>
class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> st;
        for(int i = 0; i < len; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    char ch = st.top();
                    st.pop();
                    if((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') || (ch == '[' && s[i] == ']'))
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if(!st.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};