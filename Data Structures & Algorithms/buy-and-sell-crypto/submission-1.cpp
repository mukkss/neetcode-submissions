class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Optimal
        int l = 0, r = 1;
        int MaxProfit = 0;
        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int CurrProfit = prices[r] - prices[l];
                MaxProfit = max(MaxProfit, CurrProfit);
            } else {
                l = r;
            }
            r++;
        }
        return MaxProfit;
    }
};
