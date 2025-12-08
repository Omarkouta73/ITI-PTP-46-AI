#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int l=0;
    int r=0;
    int ans=1e+6;
    int sum=0;
    for (r=0; r<nums.size(); r++){
        sum+=nums[r];
        while (sum >= target){
            ans = min(ans, r-l+1);
            sum-=nums[l];
            l++;
        }
    }

    return ans == 1e+5 ? 0 : ans;
}

int main() {

    vector<int>  nums = {2,3,1,2,4,3};

    int out = minSubArrayLen(7, nums);
    cout << out << endl;
    
    return 0;
}

// """
// A generic template for dynamic sliding window finding max window length
// """
// def longest_window(nums, condition):
//     i = 0
//     max_length = 0
//     result = None

//     for j in range(len(nums)):
//         # Expand the window
//         # Add nums[j] to the current window logic

//         # Shrink the window if the condition is violated
//         while not condition():  
//             # Shrink the window from the left
//             # Remove nums[i] from the current window logic
//             i += 1

//         # Update the result if the current window is larger
//         if j - i + 1 > max_length:
//             max_length = j - i + 1
//             # Add business logic to update result

//     return result