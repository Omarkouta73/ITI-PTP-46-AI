#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> out(n, 0);
    
//     int prod = 1;
//     int zeroCount = 0;
    
//     for (int num : nums) {
//         if (num == 0) zeroCount++;
//         else prod *= num;
//     }
    
//     for (int i = 0; i < n; i++) {
//         if (zeroCount > 1) out[i] = 0;              // more than one zero → all products are zero
//         else if (zeroCount == 1 && nums[i] == 0)    // one zero → only at that position
//             out[i] = prod;
//         else if (zeroCount == 0)                    // no zeros → normal case
//             out[i] = prod / nums[i];
//     }
    
//     return out;
// }

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n, 1);

    int left = 1;
    for (int i = 0; i < n; i++) {
        output[i] *= left;
        left *= nums[i];
    }
    
    int right = 1;
    for (int j = n - 1; j >= 0; j--) {
        output[j] *= right;
        right *= nums[j];
    }
    
    return output;
}

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
    vector<int> in = {1, 2, 3, 4};

    for (int i : productExceptSelf(in)) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> in2 = {5,4,-1,7,8};
    cout << maxSubArray(in2);
    cout << endl;

    
    return 0;
}


//i=[1  2  3  4]
//l=[1  1  2  6] <--- the first one is 1 && l[n] = l[n-1] * i[n-1]
//r=[24 12 4  1] <--- the last one is 1 && r[n] = r[n-1] * i[n-1]
//o=[24 12 8  6] <--- l[n] * r[n]

// [-2,1,-3,4,-1,2,1,-5,4] --> [4,-1,2,1]

// [5,4,-1,7,8]