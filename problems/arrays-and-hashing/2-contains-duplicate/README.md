# [Contains Duplicate](https://neetcode.io/problems/duplicate-integer/question)
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

## Time and memory complexity
- Assumptions:
    - `nums` - array of integers
    - `n = nums.length` - total length of the array `nums`

- **Time complexity**: `O(n)`
    - Each element in the array `nums` has to be iterated over at most once and inserted into a HashSet, where insertion is `O(1)`, resulting in an overall time complexity of `O(n)`.

- **Memory complexity**: `O(n)`
    - A helper HashSet of size `n` is being allocated.

## Alternative solutions

### Brute force
- **Time complexity**: `O(n^2)`
    - A more precise estimation is `O(n(n-1)/2)`, which approximates to `O(n^2)`. Each element in the array `nums` has to be iterated over twice, since every pair of indices is checked.
- **Memory complexity**: `O(1)`
    - This approach doesn't require any additional data structures.

### Sorting array
- **Time complexity**: `O(nlogn)`
    - At best, sorting algorithms have a time complexity of `O(nlogn)`, with a theoretical minimum of `O(n)`.
- **Memory complexity**: `O(1)`
    - Given that sorting algorithms do not take up any additional memory.