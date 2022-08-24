class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> vec1, vec2;
        
        if(t.length()>s.length())
            return false;
        for(int i=0;i<s.length();i++)
        {   
            vec1.emplace_back(s[i]);
            vec2.emplace_back(t[i]);
        }
        
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        if(vec1==vec2)
            return true;
        else
            return false;
    }
};