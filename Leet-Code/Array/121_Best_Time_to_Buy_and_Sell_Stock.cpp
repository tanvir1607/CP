class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices.front();
        int maxProfit = 0;
        for (int price : prices) {
            if (price < buy) {
                buy = price;
            } else  {
                int profit = price - buy;
                maxProfit = max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};