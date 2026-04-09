#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    unsigned sSize = s.size();
    unsigned tSize = t.size();
    if (sSize != tSize) {
        return false;
    }
    unordered_map<char, unsigned> sHashMap;
    unordered_map<char, unsigned> tHashMap;
    for (int i = 0; i < sSize; ++i) {
        sHashMap[s[i]] += 1;
        tHashMap[t[i]] += 1;
    }

    return sHashMap == tHashMap;
}

int main() {
    string s1 = "racecar";
    string t1 = "carrace";
    string s2 = "jar";
    string t2 = "jam";

    bool res1 = isAnagram(s1, t1);
    bool res2 = isAnagram(s2, t2);

    if (res1 != true && res2 != false) {
        cout << "Actual results not equal with expected results." << endl;
    }
    else {
        cout << "Results correct." << endl;
    }

    return 0;
}
