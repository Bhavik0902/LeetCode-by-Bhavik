class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pasc(rowIndex+1);
        
        for(int i=0;i<=rowIndex;i++)
        {
            pasc[i].resize(i+1);
            pasc[i][0] = pasc[i][i] = 1;
            for(int j=1;j<i;j++)
                pasc[i][j] = pasc[i-1][j-1] + pasc[i-1][j];                
        }
        
        return pasc[rowIndex];
    }
};