class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        // Cheapest price seen till now
        int minPrices = prices[0];

        // Maximum profit found so far
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {

            // Update cheapest buying price
            minPrices = min(minPrices, prices[i]);

            // Profit if we sell today
            int profit = prices[i] - minPrices;

            // Store maximum profit
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};