#include <iostream>
#include <ostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); i++) {
      int seen = target - nums.at(i);

      if (hash.find(seen) != hash.end()) {
        return {i, hash.at(seen)};
      }

      hash.insert({nums.at(i), i});
    }

    return {};
  }
};

int main(int argc, char *argv[]) {
  Solution solution;

  std::vector<int> nums = {2, 8, 4, 3, 6};
  int target = 7;
  std::vector<int> result = solution.twoSum(nums, target);

  if (!result.empty()) {
    std::cout << "solution: [" << result.at(0) << ", " << result.at(1) << "]"
              << std::endl;
  } else {
    std::cout << "no solution found" << std::endl;
  }

  return 0;
}
