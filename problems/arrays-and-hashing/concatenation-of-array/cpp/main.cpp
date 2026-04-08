#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> res;
    unsigned nums_size = nums.size();
    for (int i = 0; i < nums_size * 2; ++i) {
        res.push_back(nums[i % nums_size]);
    }
    return res;
}

int main() {
    vector<int> nums_1 = {1, 4, 1, 2};
    vector<int> nums_2 = {22, 21, 20, 1};
    vector<int> sol_nums_1 = {1, 4, 1, 2, 1, 4, 1, 2};
    vector<int> sol_nums_2 = {22, 21, 20, 1, 22, 21, 20, 1};

    auto res_1 = getConcatenation(nums_1);
    auto res_2 = getConcatenation(nums_2);

    if (sol_nums_1 != res_1 || sol_nums_2 != res_2) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }

    return 0;
}