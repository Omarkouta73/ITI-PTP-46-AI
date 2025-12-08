#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_p = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (min_p > prices[i]) {
            min_p = prices[i];
        }

        profit = max(profit, prices[i] - min_p);
    }

    return profit;        
}

int main(){

    vector<int> in = {2,4,1}; // 1 2 4
    cout << maxProfit(in) << endl;

    return 0;
}