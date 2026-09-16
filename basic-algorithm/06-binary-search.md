## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use two pointers, `low` and `high`, to search the sorted array. We check the middle element and reduce the search range depending on whether the target is smaller or larger.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

Binary search works on a sorted array. If the target is not found, we return `-1`.
