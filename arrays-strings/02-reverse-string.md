## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

We use two pointers, one starting from the beginning and the other from the end of the string. We swap the characters and move both pointers toward the center until the string is reversed.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

We swap the first and last characters and continue moving toward the center. The process stops when the two pointers meet.
