#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end());

    // [[1,3],[2,6],[8,10],[15,18]] // [1,6]

    vector<vector<int>> merged;
    vector<int> prev = intervals[0];

    for (vector<int> interval : intervals) {
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

int main() {

    vector<vector<int>> in = {{1,3},{2,6},{8,10},{15,18}};
    for(auto arr: merge(in)){
        for(int x: arr){
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}