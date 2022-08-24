class Solution {
public:
    
//     int toDecimal(string a)
//     {
//         int i=0, res=0, l=a.length()-1;
//         while(l>=0)
//         {
//             if(a[l]=='1')
//                 res += pow(2,i);
//             i++;
//             l--;
//         }
//         return res;        
//     }
    
//     string addBinary(string a, string b) {
//         string ans;
        
//         int n1, n2, add, rem;
//         n1 = toDecimal(a);    
//         n2 = toDecimal(b);
        
//         add = n1+n2;
//         if(add==0)
//             return "0";
        
//         while(add!=0)
//         {
//             rem = add%2;
//             if(rem==0)
//                 ans = '0' + ans;
//             else
//                 ans = '1' + ans;
//             add = add/2;
//         }
//         return ans;
//     }
    string addBinary(string a, string b) {
        int n1 = a.length(), n2=b.length();
        string ans="";
        
        if(n1==n2)
        {
            int add = 0, temp;
            for(int i=n1-1;i>=0;i--)
            {
                if(a[i]==b[i])
                {
                    temp = 0 + add;
                    ans = to_string(temp) + ans;
                    if(a[i]=='1')
                        add = 1;
                    else 
                        add = 0;
                }
                else
                {
                    if(add==1)
                    {
                        ans = '0' + ans;
                        add = 1;
                    }
                    else
                        ans = '1' + ans;
                }
            }
            if(add==1)
                ans = '1' + ans;
        }
        else if(n1<n2)
        {
            int add=0, j=n2-1, temp;
            for(int i=n1-1;i>=0;i--)
            {
                if(a[i] == b[j])
                {
                    temp = 0 + add;
                    ans = to_string(temp) + ans;
                    if(a[i]=='1')
                        add=1;
                    else
                        add=0;
                }
                else
                {
                    if(add==1)
                    {
                        ans = '0' + ans;
                        add = 1;
                    }
                    else
                        ans = '1' + ans;
                }
                j--;
            }
            
            for(int k=n2-n1-1;k>=0;k--)
            {
                if(add==1)
                {
                    if(b[k]=='1')
                    {
                        ans = '0' + ans;
                        add = 1;
                    }
                    else
                    {
                        ans = '1' + ans;
                        add = 0;
                    }
                }
                else
                    ans = b[k] + ans;
            }
            if(add==1)
                ans = '1' + ans;
        }
        else
        {
            int add=0, j=n1-1, temp;
            for(int i=n2-1;i>=0;i--)
            {
                if(b[i] == a[j])
                {
                    temp = 0 + add;
                    ans = to_string(temp) + ans;
                    if(b[i]=='1')
                        add=1;
                    else
                        add=0;
                }
                else
                {
                    if(add==1)
                    {
                        ans = '0' + ans;
                        add = 1;
                    }
                    else
                        ans = '1' + ans;
                }
                j--;
            }
            
            for(int k=n1-n2-1;k>=0;k--)
            {
                if(add==1)
                {
                    if(a[k]=='1')
                    {
                        ans = '0' + ans;
                        add = 1;
                    }
                    else
                    {
                        ans = '1' + ans;
                        add = 0;
                    }
                }
                else
                    ans = a[k] + ans;
            }
            if(add==1)
                ans = '1' + ans;
        }
        
        return ans;
    }
};