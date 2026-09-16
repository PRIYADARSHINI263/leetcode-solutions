## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

We use a stack to store opening brackets. When a closing bracket is found, we check whether it matches the most recent opening bracket.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

The brackets must close in the correct order. The string is valid only when all opening brackets are matched correctly and the stack is empty at the end.
