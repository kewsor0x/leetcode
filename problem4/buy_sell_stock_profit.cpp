#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int b = prices[0];
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            int s = prices[i];
            int curr_profit = s - b;

            if (curr_profit > max_profit) {
                max_profit = curr_profit;
            }
            if (b > s) {
                b = s;
            }
        }

        return max_profit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7, 6, 4, 3, 1};
    int result = solution.maxProfit(prices);

    cout << result << endl;

    return 0;
}
