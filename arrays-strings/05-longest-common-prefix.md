# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all the strings. If there is no common prefix, return an empty string.

## Approach
- Take the first string as the initial prefix.
- Compare it with each remaining string character by character.
- Keep only the matching characters as the new prefix.
- Repeat until all strings are checked.

## Test Cases

### Test Case 1
Input:
`["flower", "flow", "flight"]`

Output:
`fl`

### Test Case 2
Input:
`["dog", "racecar", "car"]`

Output:
`""`

## Output

```text
Test Case 1: fl
Test Case 2: