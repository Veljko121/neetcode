from typing import List

def longestCommonPrefix(strs: List[str]) -> str:
    prefix = ""
    for i, c in enumerate(strs[0]):
        for s in strs:
            if s[i] != c:
                return prefix
        prefix += c
    return prefix

def main():
    strs1 = ["bat", "bag", "bank", "band"]
    prefix1 = "ba"
    strs2 = ["dance", "dag", "danger", "damage"]
    prefix2 = "da"
    strs3 = ["neet", "feet"]
    prefix3 = ""

    res1 = longestCommonPrefix(strs1)
    res2 = longestCommonPrefix(strs2)
    res3 = longestCommonPrefix(strs3)

    print(res1, res2, res3)

    if res1 != prefix1 or res2 != prefix2 or res3 != prefix3:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()