class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for(int i=s.length()-1;i>=0;i--)
        {            
            if(st.size()!=0)
            {
                if(st.top()==s[i])
                    st.pop();
                else
                    st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        
        s = "";
        while(st.size()!=0)
        {
            s += st.top();
            st.pop();
        }
        
        return s;
    }
};