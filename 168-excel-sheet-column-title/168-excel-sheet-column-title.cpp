class Solution {
public:
    string convertToTitle(int cN) {
        map<int,char> mp;
        for(int i=0;i<26;i++)
            mp[i+1]=char(i+65);
        
        string ans = "";
       
            while(cN>26)
            {
                int check = 0;
                if(cN%26==0)
                {
                    ans = mp[26] + ans;
                    check = 1;
                }
                else
                    ans = mp[cN%26] + ans;
                cN /= 26;
                
                if(check==1)
                    cN--;
            }
            ans = mp[cN] + ans;
        
        
        
        return ans;
    }
};