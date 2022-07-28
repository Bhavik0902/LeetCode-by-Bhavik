class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        
        long temp = n;
        
        if(temp<0)
            temp = -1*temp;
        
        while(temp)
        {
            if(temp%2)
            {
                res *= x;
                temp--;
            }        
            else
            {
                x*=x;
                temp/=2;
            }
        }
        
        if(n<0)
            res = 1/res;
        
        return res;
    }
};