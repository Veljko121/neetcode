#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> unique_set;
    for (auto num : nums) {
        if (!unique_set.contains(num)) {
            unique_set.insert(num);
        }
        else {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums_1 = {1, 2, 3, 3};
    vector<int> nums_2 = {1, 2, 3, 4};

    auto res_1 = hasDuplicate(nums_1);
    auto res_2 = hasDuplicate(nums_2);

    if (res_1 != true && res_2 != false) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }

    return 0;
}