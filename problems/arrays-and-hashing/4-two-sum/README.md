## [Two Sum](https://neetcode.io/problems/two-integer-sum/question)

Given an array of integers `nums` and an integer `target`, return the indices `i` and `j` such that `nums[i] + nums[j] == target` and `i != j`.

You may assume that *every* input has *exactly* one pair of indices `i` and `j` that satisfy the condition.

Return the answer with the smaller index first.

**Example 1**:
```
Input: 
nums = [3,4,5,6], target = 7

Output: [0,1]
```
Explanation: `nums[0] + nums[1] == 7`, so we return `[0, 1]`.

**Example 2:**
```
Input: nums = [4,5,6], target = 10

Output: [0,2]
```
**Example 3**:
```
Input: nums = [5,5], target = 10

Output: [0,1]
```
**Constraints:**

- `2 <= nums.length <= 1000`
- `10,000,000 <= nums[i] <= 10,000,000`
- `10,000,000 <= target <= 10,000,000`
- **Only one valid answer exists.**

## Time and memory complexity
- Assumptions:
    - `nums` - array of integers
    - `target` - target number
    - `n = nums.length` - total length of the array `nums`

- **Time complexity**: `O(n)`
    - Each element in the array `nums` has to be iterated over at most once and inserted into a HashMap, where insertion is `O(1)`, resulting in an overall time complexity of `O(n)`.

- **Memory complexity**: `O(n)`
    - A helper HashMap of size `n` is being allocated.

## Alternative solutions

### Brute force
- **Time complexity**: `O(n^2)`
    - A more precise estimation is `O(n(n-1)/2)`, which approximates to `O(n^2)`. Each element in the array `nums` has to be iterated over twice, since every pair of indices is checked.
- **Memory complexity**: `O(1)`
    - This approach doesn't require any additional data structures.