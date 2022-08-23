class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = 0, n = needle.size(), h = haystack.size();
        
        if(needle.size()==0)
            return ans;
        
        if(n>h)
            return -1;
        
        if(n==h)
        {
            bool res = false;
            for(int i=0;i<n;i++)
            {
                if(needle[i] != haystack[i])
                    res = true;
            }
            if(res==true)
                return -1;
            else 
                return 0;
        }
        else
        {
            int x;
            for(int i=0;i<h;i++)
            {
                x=0;
                if(haystack[i]==needle[x])
                {
                    x++;
                    for(int j=1;j<n;j++)
                    {
                        if(haystack[i+j] != needle[j])
                            break;
                        x++;
                    }
                    if(x==n)
                    {
                        ans = i;
                        break;
                    }
                }
            }
            if(x==n)
                return ans;
            else
                return -1;
        }
    }
};