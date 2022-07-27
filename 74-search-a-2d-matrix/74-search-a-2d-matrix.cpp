class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool res = false;
        
        for(auto it: matrix)
        {
            if(target<=it[matrix[0].size()-1])    
            {
                for(auto pt:it)
                {
                    if(target==pt)
                    {
                        res = true;
                        break;
                    }
                }
            }
            
            if(res==true)
                break;
        }
        return res;
    }
};