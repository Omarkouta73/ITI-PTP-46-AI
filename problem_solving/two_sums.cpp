#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> out;
//     for (int i=0; i<nums.size(); i++){
//         for (int j = i+1; j<nums.size(); j++){
//             if (nums[i] + nums[j] == target){
//                 out.push_back(i);
//                 out.push_back(j);
//                 return out;
//             }
//         }
//     }
//     return out;
// }

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> table;
    for (int i=0; i<nums.size(); i++){
        int complement = target - nums[i];
        if (table.find(complement) != table.end()){
            return vector<int>{table[complement], i};
        }
        table[nums[i]] = i;
    }
    
    return vector<int>();
}

int main(){

    vector<int> v = {1,7,5,4};
    for (int i: twoSum(v, 9)){
        cout << i << endl;
    }
    
    return 0;
}