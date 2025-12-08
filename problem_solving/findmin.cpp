#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int findMin(vector<int>& nums) {
    int l = 0;
    int r = nums.size()-1;
    int m;
    
    if (nums[l] < nums[r]) return nums[l];
    while (l < r){
        m = l+(r-l)/2;
        cout << "left=" << l << " "  << "mid=" << m << " " << "right=" << r << endl;
        if (l == m ){
            if (nums[l] < nums[r]) return nums[l];
            else return nums[r];
        }
        if (nums[l] < nums[m]) l = m;
        else r = m;
    }
    return -1;
}

int main() {
    
    // vector<int> in = {1};


    // vector<int> in = {8, 12, 113, -2, 3, 7};
    // vector<int> in = {4,5,6,7,0,1,2};
    vector<int> in = {11,13,15,17};
    // vector<int> in = {3,4,5,1,2};
    // vector<int> in = {6,7,0,1,2,3,4,5};
    int target = 0;
    // int tatget = 3;

    cout << findMin(in) <<  endl;
    
    
    return 0;
}