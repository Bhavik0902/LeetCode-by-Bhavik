class Solution {
public:
    void nextPermutation(vector<int>& res) {
        int counter = 0, n =res.size();
        for(int i=n-1;i>0;i--)
        {
            if(res[i]>res[i-1])
            {
                counter = i;
                for(int j=n-1;j>=i;j--)
                {
                    if(res[j]>res[i-1])
                    {
                        int temp = res[j];
                        res[j] = res[i-1];
                        res[i-1] = temp;
                        break;
                    }
                }
                break;
            }
        }
        
        reverse(res.begin() + counter,res.end());
    }
    
};