from typing import List

def twoSum(nums: List[int], target: int) -> List[int]:
    complements = {}
    for i in range(len(nums)):
        num = nums[i]
        complement = target - num
        if num in complements.keys():
            return [complements[num], i]
        complements[complement] = i
    return [-1, -1]

def main():
    nums1 = [3, 4, 5 ,6]
    target1 = 7
    nums2 = [4, 5 ,6]
    target2 = 10

    res1 = twoSum(nums1, target1)
    res2 = twoSum(nums2, target2)

    if res1 != [0, 1] and res2 != [0, 2]:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()
