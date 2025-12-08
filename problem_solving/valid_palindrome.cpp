#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(string s) {
    // remove non alpha numeric and lower
    string r;
    for (char c : s) {
        if (isalnum(c))
            r += tolower(c);
    }

    int i = 0, j = r.size()-1;
    while (i<j){
        if (r[i] != r[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){

    cout << isPalindrome(" ") << endl;

    return 0;
}