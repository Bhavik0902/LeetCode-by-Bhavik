class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool res=true;
        
        for(char it: s)
        {
            if(it==')')
            {
                if(st.empty())
                {
                    res = false;
                    break;
                }
                if(st.top()=='(')
                    st.pop();
                else
                {
                    res = false;
                    break;
                }
            }
            else if(it=='}')
            {
                if(st.empty())
                {
                    res = false;
                    break;
                }
                if(st.top()=='{')
                    st.pop();
                else
                {
                    res = false;
                    break;
                }
            }
            else if(it==']')
            {
                if(st.empty())
                {
                    res = false;
                    break;
                }
                if(st.top()=='[')
                    st.pop();
                else
                {
                    res = false;
                    break;
                }
            }
            else
                st.emplace(it);
        }
        
        if(res && st.empty())
            return true;
        else 
            return false;
    }
};