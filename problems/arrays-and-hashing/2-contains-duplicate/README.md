# Contains Duplicate
## Problem description

Given an integer array `nums`, return `true` if any value appears **more than once** in the array, otherwise return `false`.

**Example 1:**
```
Input: nums = [1, 2, 3, 3]

Output: true
```

**Example 2:**
```
Input: nums = [1, 2, 3, 4]

Output: false
```

## Time complexity
Given an array `nums` of length `n`, the time complexity of the given solution is `O(n)`. Each element is iterated over once and inserted into a HashSet, where insertion is `O(1)`, resulting in an overall time complexity of `O(n)`.

## Memory complexity
Given an array `nums` of length `n`, the memory complexity of the given solution is `O(n)`, as a helper HashSet of size `n` is being allocated.
