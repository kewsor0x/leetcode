#include <iostream>
#include <ostream>
#include <unordered_map>
#include <vector>

class Solution {
  public:
    bool containsDuplicated(std::vector<int> &nums) {
        std::unordered_map<int, int> times;

        for (int i = 0; i < nums.size(); i++) {
            times[nums.at(i)]++;

            if (times[nums.at(i)] > 1) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    std::vector<int> nums = {7, 2, 3, 3};
    bool result = solution.containsDuplicated(nums);

    if (!result) {
        std::cout << "no solution found" << std::endl;
    } else {
        std::cout << "there is a number that appears more than once"
                  << std::endl;
    }

    return 0;
}
