#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;

int characterReplacement(string s, int k) {
    int i, j, ans, max_freq = 0;
    unordered_map<char, int> freqs;

    for (j=0; j<s.length(); j++){
        freqs[s[j]]++;
        max_freq = max(max_freq, freqs[s[j]]);
        // while violating the condition :: What is the condition?? 
        while ((j-i+1)-max_freq > k) {
            freqs[s[i]]--;
            i++;
        }

        ans = max(ans, j-i+1);
    }
    return ans;
}

int main() {

    string x = "ABAB";

    int out = characterReplacement(x, 2);
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