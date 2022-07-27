class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), minp = prices[0], profit = 0;
        
        for(int i=1;i<n;i++)
        {
            minp = min(prices[i], minp);
            profit = max(profit, prices[i] - minp);
        }
        
        return profit;
    }
};