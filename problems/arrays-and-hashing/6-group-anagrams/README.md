# [Group Anagrams](https://neetcode.io/problems/anagram-groups/question)

Given an array of strings `strs`, group all *anagrams* together into sublists. You may return the output in **any order**.

An **anagram** is a string that contains the exact same characters as another string, but the order of the characters can be different.

**Example 1:**
```
Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
```
**Example 2:**
```
Input: strs = ["x"]

Output: [["x"]]
```
**Example 3**:
```
Input: strs = [""]

Output: [[""]]
```
**Constraints:**
- `1 <= strs.length <= 1000`
- `0 <= strs[i].length <= 100`
- `strs[i]` is made up of lowercase English letters.

## Time and memory complexity

- Assumptions:
    - `strs` - array of strings
    - `n` - count of all characters in all strings

- **Time complexity**: `O(n)`
    - Each character has to be iterated over once and intermediary results have to be inserted into a HashMap, where insertion is `O(1)`, resulting in an overall time complexity of `O(n)`.


- **Memory complexity**: `O(n)`
    - A helper HashMap of size `n` is being allocated and also a helper list `count` of size `26`.

## Alternative solutions

### String sorting
- Assumptions:
    - `strs` - array of strings
    - `n` - average count of characters in a single string
    - `m = strs.length` - strings count
- **Time complexity**: `O(m * nlogn)`
    - The algorithm is bottlenecked by the sorting algorithm. Each string has to be sorted.
- **Memory complexity**: `O(n)`
    - A helper HashMap of size `n` is being allocated.