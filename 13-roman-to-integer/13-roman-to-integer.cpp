class Solution {
public:
    int romanToInt(string s) {
        
        map<char, int> assign;
        assign['I'] = 1;
        assign['V'] = 5;
        assign['X'] = 10;
        assign['L'] = 50;
        assign['C'] = 100;
        assign['D'] = 500;
        assign['M'] = 1000;
        
        int res = 0, counter = 0, i;
        for(i=0;i<s.size() - 1;i++)
        {
            if(assign[s[i]]<assign[s[i+1]])
            {
                res += assign[s[i+1]] - assign[s[i]];                      
                if(i==s.size()-2)
                    counter=1;
                i++;          
            }
            else
                res += assign[s[i]];
        }
        
        if(counter==0)
            res += assign[s[i]];
        
        return res;
    }
};