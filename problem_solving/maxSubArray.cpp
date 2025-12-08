#include <iostream>
#include <vector>
#include <climits>


using namespace std;


// Kadane’s algorithm
int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int curSum = 0;
    
    for (int num : nums) {
        curSum = max(num, curSum + num);
        maxSum = max(maxSum, curSum);
    }
    
    return maxSum;
}

int main() {

    vector<int> in = {5,4,-1,7,8};
    cout << maxSubArray(in);
    cout << endl;

    
    return 0;
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        // [[1,3],[2,6],[8,10],[15,18]] // [1,6]

        vector<vector<int>> merged;
        vector<int> prev = intervals[0];

        for (int i = 1; i < intervals.size(); ++i) {
            vector<int> interval = intervals[i];
            if (interval[0] <= prev[1]) {
                prev[1] = max(prev[1], interval[1]);
            } else {
                merged.push_back(prev);
                prev = interval;
            }
        }

        merged.push_back(prev);
        return merged;        
    }
};
