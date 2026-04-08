from typing import List

def get_concatenation(nums: List[int]) -> List[int]:
    ans = []
    nums_size = len(nums)
    for i in range(nums_size * 2):
        ans.append(nums[i % nums_size])
    return ans

def main():
    nums_1 = [1, 4, 1, 2]
    nums_2 = [22, 21, 20, 1]
    sol_nums_1 = [1, 4, 1, 2, 1, 4, 1, 2]
    sol_nums_2 = [22, 21, 20, 1, 22, 21, 20, 1]

    res_1 = get_concatenation(nums_1)
    res_2 = get_concatenation(nums_2)

    if res_1 != sol_nums_1 or res_2 != sol_nums_2:
        print("Actual results not equal with expected results.")
    else:
        print("Results correct.")

if __name__ == "__main__":
    main()
