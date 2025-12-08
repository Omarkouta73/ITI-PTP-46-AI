#include <iostream>
#define size 8
using namespace std;

int main(){
    int arr[size] = {1,2,1,3,4,5,6,2};
    int left = 0, others = 0, max = 0;
    for (left=0; left<size; left++){
        int curr = left;
        for (int right=size-1; right>left; right--){
            if (arr[right] == arr[curr]){
                if ((right-left) > max){
                    max = right-left;
                    break;
                }
            }
        }
    }
    cout << max << endl;
}
