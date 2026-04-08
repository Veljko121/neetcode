from typing import List

def getConcatenation(nums: List[int]) -> List[int]:
    ans = []
    numsSize = len(nums)
    for i in range(numsSize * 2):
        ans.append(nums[i % numsSize])
    return ans

def main():
    nums1 = [1, 4, 1, 2]
    nums2 = [22, 21, 20, 1]
    solNums1 = [1, 4, 1, 2, 1, 4, 1, 2]
    solNums2 = [22, 21, 20, 1, 22, 21, 20, 1]

    res1 = getConcatenation(nums1)
    res2 = getConcatenation(nums2)

    if res1 != solNums1 or res2 != solNums2:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()
