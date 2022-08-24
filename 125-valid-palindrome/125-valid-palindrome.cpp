class Solution {
public:
    bool isPalindrome(string s) {
        
        string word, temp;
        for(char c: s)
        {
            c = tolower(c);
            if((c>='a' && c<='z') || (c>='0' && c<='9'))
                word += c;
        }
        
        temp = word;
        reverse(word.begin(), word.end());
        if(word==temp)
            return true;
        else
            return false;
    }
};