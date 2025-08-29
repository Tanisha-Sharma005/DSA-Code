# Best Time to Buy and Sell Stock (C++)

## 📌 Problem Statement
You are given an array `price[]` where `price[i]` represents the stock price on the `i-th` day.  
Your task is to determine the **maximum profit** you can achieve by choosing a day to buy and a different day in the future to sell.

- If no profit is possible, return `0`.

---

## 🖥️ Example
**Input:**
Enter number of days: 6
Enter prices for each day: 7 1 5 3 6 4

**Output:**
Maximum Profit = 5

**Explanation:**  
- Buy on Day 2 at price = 1  
- Sell on Day 5 at price = 6  
- Profit = 6 - 1 = **5**
---
## 🚀 Approach
1. Take input for number of days and stock prices.  
2. Track the minimum price so far (`bestBuy`).  
3. For each day, calculate possible profit = `price[i] - bestBuy`.  
4. Keep updating maximum profit.  
5. Finally, print the maximum profit.

This runs in **O(n)** time with **O(1)** extra space.

---
