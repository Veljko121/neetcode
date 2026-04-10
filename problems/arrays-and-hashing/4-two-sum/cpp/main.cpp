#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> complements;
    for (int i = 0; i < nums.size(); ++i) {
        int num = nums[i];
        int complement = target - num;
        if (complements.contains(num)) {
            return vector<int>{ complements[num], i };
        }
        complements[complement] = i;
    }
    return vector<int>{ -1, -1 };
}

int main() {
    vector<int> nums1 = { 3, 4, 5, 6 };
    int target1 = 7;
    vector<int> nums2 = { 4, 5, 6 };
    int target2 = 10;

    vector<int> res1 = twoSum(nums1, target1);
    vector<int> res2 = twoSum(nums2, target2);

    if (res1 != vector<int>{0, 1} && res2 != vector<int>{0, 2}) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }

    return 0;
}