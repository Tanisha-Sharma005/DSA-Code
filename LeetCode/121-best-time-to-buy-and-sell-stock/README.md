# 121. Best Time to Buy and Sell Stock

## Problem
You are given an array prices where prices[i] is the price of a given stock on the i-th day.  
You want to maximize your profit by choosing a single day to buy and a different day in the future to sell.  

Return the maximum profit you can achieve. If no profit is possible, return 0.

## Example
Input: [7,1,5,3,6,4]  
Output: 5

## Explanation
Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

## Code (C++)
```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};
