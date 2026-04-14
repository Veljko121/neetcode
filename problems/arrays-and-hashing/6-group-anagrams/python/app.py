from typing import List
from collections import defaultdict

def groupAnagrams(strs: List[str]) -> List[List[str]]:
    res = defaultdict(list)

    for s in strs:
        count = [0] * 26

        for c in s:
            count[ord(c) - ord("a")] += 1

        res[tuple(count)].append(s)
    
    return list(res.values())

def main():
    strs1 = ["act", "pots", "tops", "cat", "stop", "hat"]
    out1 = [["act","cat"],["pots","tops","stop"],["hat"]]
    strs2 = ["x"]
    out2 = [["x"]]

    res1 = groupAnagrams(strs1)
    res2 = groupAnagrams(strs2)

    if res1 != out1 or res2 != out2:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()