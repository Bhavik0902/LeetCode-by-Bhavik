class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> vec1, vec2;
        //bool res = true;
        
        if(t.length()>s.length())
            return false;
        
        for(char c: s)
            vec1.emplace_back(c);
        
        sort(vec1.begin(), vec1.end());
        for(char c: t)
        {
            vec2.emplace_back(c);
            // if(find(vec1.begin(),vec1.end(),c)==vec1.end() || find(vec2.begin(),vec2.end(),c)!=vec2.end()){
            //     res=false;
            //     break;
            // }
        }
        
        sort(vec2.begin(), vec2.end());
        if(vec1==vec2)
            return true;
        else
            return false;
    }
};