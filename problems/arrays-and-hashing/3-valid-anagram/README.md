# Valid Anagram
Given two strings `s` and `t`, return `true` if the two strings are anagrams of each other, otherwise return `false`.

An **anagram** is a string that contains the exact same characters as another string, but the order of the characters can be different.

**Example 1**:
```
Input: s = "racecar", t = "carrace"

Output: true
```
**Example 2**:
```
Input: s = "jar", t = "jam"

Output: false
```
**Constraints:**
- `s` and `t` consist of lowercase English letters.

## Time and memory complexity
- Assumptions:
    - `s` - first string
    - `t` - second string
    - `n = s.length + t.length` - total lenght of both strings

- **Time complexity**: `O(n)`
    - Each character in both strings has to be iterated over once and inserted into a HashMap, where insertion is `O(1)`, resulting in an overall time complexity of `O(n)`.

- **Memory complexity**: `O(n)`
    - A helper HashMap of size `n` is being allocated.

## Alternative solutions

### Sorting strings
- **Time complexity**: `O(nlogn)`
    - At best, sorting algorithms have a time complexity of `O(nlogn)`, with a theoretical minimum of `O(n)`.
- **Memory complexity**: `O(1)`
    - Given that sorting algorithms do not take up any additional memory.