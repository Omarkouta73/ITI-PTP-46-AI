#include <iostream>
#include <vector>
#include <map>


using namespace std;


bool containsDuplicate(vector<int>& nums) {
    map<int, int> mp;
    for (int i: nums){
        mp[i]++;
    }
    for (auto i: mp){
        if (i.second > 1){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> in = {3,9,1,5,6};
    cout << containsDuplicate(in) << endl;
    
    return 0;
}