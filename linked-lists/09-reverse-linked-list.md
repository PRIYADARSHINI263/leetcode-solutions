## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

We use three pointers: `previous`, `current`, and `next`. We change the direction of each link and move the pointers forward until the complete linked list is reversed.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The `previous` pointer starts as `NULL`. At the end, `previous` becomes the new head of the reversed linked list.
