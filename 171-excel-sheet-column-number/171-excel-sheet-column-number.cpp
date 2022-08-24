class Solution {
public:
    int titleToNumber(string cT) {
        map<char, int> mp;
        int res=0, j=0;
        
        for(int i=0;i<26;i++)
            mp[char(i+65)] = i+1;
        
        for(int i=cT.length()-1;i>=0;i--)
        {
            res += mp[cT[i]]*pow(26,j++);   
        }
        
        return res;
    }
};