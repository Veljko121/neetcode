#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// HashMap method is complicated for C++
// Using the "String sorting" method
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;

    for (auto s : strs) {
        string sortedString = s;
        sort(sortedString.begin(), sortedString.end());
        if (!groups.contains(sortedString)) {
            groups[sortedString] = {};
        }
        auto& group = groups[sortedString];
        group.push_back(s);
    }

    vector<vector<string>> result;
    for (auto& [key, group] : groups)
        result.push_back(group);
    return result;
}

int main(int argc, char const *argv[])
{
    vector<string> strs1 = { "act", "pots", "tops", "cat", "stop", "hat" };
    vector<string> strs2 = { "x" };
    vector<string> strs3 = { "" };

    vector<vector<string>> output1 = { { "hat" }, { "act", "cat" }, { "stop", "pots", "tops" }};
    vector<vector<string>> output2 = { { "x" } };
    vector<vector<string>> output3 = { { "" } };
    for (auto& group : output1) sort(group.begin(), group.end());
    for (auto& group : output2) sort(group.begin(), group.end());
    for (auto& group : output3) sort(group.begin(), group.end());
    sort(output1.begin(), output1.end());
    sort(output2.begin(), output2.end());
    sort(output3.begin(), output3.end());

    auto res1 = groupAnagrams(strs1);
    auto res2 = groupAnagrams(strs2);
    auto res3 = groupAnagrams(strs3);
    for (auto& group : res1) sort(group.begin(), group.end());
    for (auto& group : res2) sort(group.begin(), group.end());
    for (auto& group : res3) sort(group.begin(), group.end());
    sort(res1.begin(), res1.end());
    sort(res2.begin(), res2.end());
    sort(res3.begin(), res3.end());

    if (res1 != output1 || res2 != output2 || res3 != output3) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }
    
    return 0;
}
