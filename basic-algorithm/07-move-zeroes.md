## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

We use a pointer to keep track of the position where the next non-zero element should be placed. We move all non-zero elements to the beginning and place the zeroes at the end.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The non-zero elements remain in their original order. The array is modified in-place without using another array.
