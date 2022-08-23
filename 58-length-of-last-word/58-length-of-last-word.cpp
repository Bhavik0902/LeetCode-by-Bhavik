class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1, count=0;
        
        while(i>=0)
        {
            if(s[i]==' ')
                i--;
            else
                break;
        }
        
        while(i>=0)
        {
            if(s[i]==' ')
                break;
            else
            {
                count++;
                i--;
            }
        }
        
        return count;
    }
};