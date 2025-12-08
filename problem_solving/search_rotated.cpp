#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size()-1;
    int m;
    
    // arr[r] < t ? r = m-1 : (l < t <= r ? l = m+1 : r = m-1)
    // else if ((nums[r] < target) || (nums[l] >= target && target > nums[r])){
        //     r = m - 1;
        // }

    while (l <= r){
        m = l+((r-l)/2);
        cout << "left=" << l << " "  << "mid=" << m << " " << "right=" << r << endl;

        // cout << m << endl;

        if (nums[m] == target){
            return m;
        }
        if (nums[l] <= nums[m]){
            if (nums[l] <= target && target <= nums[m]){
                r = m -1;
            }
            else {
                l = m + 1;
            }
        }
        else{
            if (nums[m] < target && target <= nums[r]){
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        
    }

    return -1;
}

int main() {
    
    // vector<int> in = {1};


    // vector<int> in = {4,5,6,7,0,1,2};
    vector<int> in = {3,1};
    // vector<int> in = {6,7,0,1,2,3,4,5};
    int target = 0;
    // int tatget = 3;

    cout << search(in, 1) <<  endl;
    
    
    return 0;
}
// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 0 + (7/2) = 3
// |     |       |
// l     m       r

// t = 4
// arr[r] < t ? r = m-1 : l = m+1
// arr[7] = 5 < 4 ? l = 3+1 = 4 

// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 4 + (7-4)/2 = 4 + 1 = 5
//         | |   |
//         l m   r

// arr[7] < 4 = 5 < 4 ? l = m+1 = 5+1 = 6

// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 6 + (7-6)/2 = 6 + 0 = 6
//             | |
//           m/l r

// arr[m] = arr[6] = 4 == t (DONE)

// ---------------------------------------------------------------------------------------------

// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 0 + (7/2) = 3
// |     |       |
// l     m       r

// t = 0
// arr[r] < t ? r = m-1 : (l < t < r ? l = m+1 : r = m-1)
// arr[7] = 5 < 0 ? 

// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 0 + (2/2) = 1
// | | |
// l m r     

// arr[r] < t ? r = m-1 : (l < t <= r ? l = m+1 : r = m-1)
// arr[2] = 0 < 0 ? NO : YES : l = m+1 = 1+1 = 2

// 0 1 2 3 4 5 6 7
// 6 7 0 1 2 3 4 5     m = 2 + (2-2) = 2
//     |
//   l,m,r

// arr[m] = arr[2] == t = 0 (DONE)