# [Longest Common Prefix](https://neetcode.io/problems/longest-common-prefix/question)
You are given an array of strings `strs`. Return the **longest** common prefix of all the strings.

If there is no longest common prefix, return an empty string `""`.

**Example 1:**
```
Input: strs = ["bat","bag","bank","band"]

Output: "ba"
```
**Example 2**:
```
Input: strs = ["dance","dag","danger","damage"]

Output: "da"
```
**Example 3**:
```
Input: strs = ["neet","feet"]

Output: ""
```
**Constraints:**
- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` is made up of lowercase English letters if it is non-empty.

## Time and memory complexity

- Assumptions:
    - `strs` - array of strings
    - `n` - length of all strings combined

- **Time complexity**: `O(n)`
    - Each character of all strings `strs` has to be iterated over at most once and appended to a helper string `prefix`, where appending is `O(1)`, resulting in an overall time complexity of `O(n)`.

- **Memory complexity**: `O(1)`
    - This approach doesn't require any additional data structures.