#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int search(vector<int>& nums, int target) {
    // sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size()-1;
    int mid = 0;
    while (left <= right){
        mid = left + ((right - left) / 2);
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    
    // vector<int> in = {2,1,5,6,2,3};
    vector<int> in = {-1, 0, 3, 5, 9, 12};
    // cout << search(in, 2) << endl;
    // cout << 5/2 << endl;

    cout << search(in, 9) <<  endl;
    
    
    return 0;
}