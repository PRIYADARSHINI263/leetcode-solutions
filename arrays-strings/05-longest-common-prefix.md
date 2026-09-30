# Longest Common Prefix

## Problem

Find the longest common prefix shared by all strings in an array.

## Approach

Start with the first string as the prefix. Compare it with each remaining string and reduce the prefix until it matches the beginning of the current string.

## Example

**Input:**

```text
["flower", "flow", "flight"]
```

**Output:**

```text
"fl"
```

## Complexity

* **Time Complexity:** O(n × m)
* **Space Complexity:** O(1)

Where `n` is the number of strings and `m` is the length of the shortest string.
