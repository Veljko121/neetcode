def isAnagram(s: str, t: str) -> bool:
    sSize = len(s)
    tSize = len(t)
    if sSize != tSize:
        return False
    sHashMap = {}
    tHashMap = {}
    for i in range(sSize):
        sHashMap[s[i]] = sHashMap.get(s[i], 0) + 1
        tHashMap[t[i]] = tHashMap.get(t[i], 0) + 1
    return sHashMap == tHashMap

def main():
    s1 = "racecar"
    t1 = "carrrace"
    s2 = "jar"
    t2 = "jam"

    res1 = isAnagram(s1, t1)
    res2 = isAnagram(s2, t2)

    if res1 != True and res2 != False:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()