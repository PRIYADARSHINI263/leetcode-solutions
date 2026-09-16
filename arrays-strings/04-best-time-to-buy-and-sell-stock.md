## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the lowest price seen so far. For each price, we calculate the possible profit and update the maximum profit.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

We must buy before selling. If the prices continuously decrease, the maximum profit is 0.
