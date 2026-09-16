## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We use two loops to check every possible pair of numbers in the array. If the sum of two numbers is equal to the target, we return their indexes.

### Complexity

* Time: O(n²)
* Space: O(1)

### Notes

The array index starts from 0. We use `j = i + 1` so that we check each pair only once.
