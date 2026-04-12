#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string firstStr = strs[0];
    string prefix = "";
    for (int i = 0; i < firstStr.length(); ++i) {
        char c = firstStr[i];
        for (auto str : strs) {
            if (i >= str.length() || str[i] != c) {
                return prefix;
            }
        }
        prefix.push_back(c);
    }
    return prefix;
}

int main() {
    vector<string> strs1 = { "bat", "bag", "bank", "band" };
    string prefix1 = "ba";
    vector<string> strs2 = { "dance", "dag", "danger", "damage" };
    string prefix2 = "da";
    vector<string> strs3 = { "neet", "feet" };
    string prefix3 = "";

    string res1 = longestCommonPrefix(strs1);
    string res2 = longestCommonPrefix(strs2);
    string res3 = longestCommonPrefix(strs3);

    if (res1 != prefix1 || res2 != prefix2 || res3 != prefix3) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }

    return 0;
}