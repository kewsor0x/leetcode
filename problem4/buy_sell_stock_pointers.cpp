#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int b = 0;
        int s = 1;
        int max_profit = 0;

        while (s < prices.size()) {
            if (prices[s] > prices[b]) {
                int profit = prices[s] - prices[b];
                max_profit = max(max_profit, profit);
            } else {
                b = s;
            }
            s++;
        }
        return max_profit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {2, 1, 2, 1, 0, 1, 2};

    int result = solution.maxProfit(prices);
    cout << "max profit: " << result << endl;
    ;

    return 0;
}
