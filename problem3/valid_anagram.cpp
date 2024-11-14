#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
  public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> seen_s;
        unordered_map<char, int> seen_t;

        for (char c : s) {
            seen_s[c]++;
        }
        for (char k : t) {
            seen_t[k]++;
        }
        if (seen_s != seen_t) {
            return false;
        }

        return true;
    }
};

int main() {
    Solution solution;
    string s = "anagram";
    string t = "naragam";
    bool result = solution.isAnagram(s, t);

    cout << result << endl;
}
