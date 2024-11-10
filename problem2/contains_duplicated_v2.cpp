
#include <iostream>
#include <unordered_set>
#include <vector>
class Solution {
  public:
    bool containsDuplicated(std::vector<int> &nums) {
        std::unordered_set<int> times;

        for (int i = 0; i < nums.size(); i++) {
            if (times.find(nums.at(i)) != times.end()) {
                return true;
            }

            times.insert(nums.at(i));
        }

        return false;
    }
};

int main(int argc, char *argv[]) {
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 6};
    bool result = solution.containsDuplicated(nums);

    if (!result) {
        std::cout << "no solution found" << std::endl;
    } else {
        std::cout << "there is a number that appears more than once"
                  << std::endl;
    }

    return 0;
}
