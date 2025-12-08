#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 1; int j = 1;

    while (i < nums.size()){
        if (nums[i] != nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return j;
        
}

int main(){

    vector<int> vec = {1,1,2};

    cout << removeDuplicates(vec) << endl;

    return 0;
}