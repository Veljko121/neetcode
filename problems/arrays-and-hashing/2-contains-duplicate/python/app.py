from typing import List

def hasDuplicate(nums: List[int]) -> bool:
    unique_set = set()
    for num in nums:
        if num in nums:
            return True
        unique_set.add(num)
    return True

def main():
    nums1 = [1, 2, 3, 3]
    nums2 = [1, 2, 3, 4]

    res1 = hasDuplicate(nums1)
    res2 = hasDuplicate(nums2)

    if res1 != True and res2 != False:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()
