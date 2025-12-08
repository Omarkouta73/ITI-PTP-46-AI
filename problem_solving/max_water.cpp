#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) {
    int maximum = 0;
    int left = 0, right = height.size()-1;

    while (left < right){

        int h = min(height[left], height[right]);
    
        int w  = right-left;
    
        int area = w * h;
    
        maximum = max(maximum, area);
    
        if (height[left] < height[right]){
            left++;
        } else {
            right--;
        }

    }
    
    return maximum;
}

int main(){

    vector<int> vec = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(vec) << endl;

    return 0;
}