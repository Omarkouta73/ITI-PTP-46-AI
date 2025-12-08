
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// dynamic sliding window:
//   1. increase from right, decrease from left. (but you do according to a criteria)
//   2. Increase from right. If the criteria was broken => decrease from left to re-fulfill the criteria.
// criteria: window has only one zero
// base case: if there are no zeros => return n-1

int lengthOfLongestSubstring(string s) {
    set<char> window;
    int left = 0, right = 0, res = 0;

    while (right < s.size()) {
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }

        window.insert(s[right]);
        res = max(res, right - left + 1);
        right++;
    }

    return res;
}


int main(){

    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s) << endl;

    return 0;
}