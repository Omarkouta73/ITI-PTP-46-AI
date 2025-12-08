
#include <iostream>
#include <algorithm> 
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s: strs){
            string word = s;
            sort(word.begin(), word.end());
            mp[word].push_back(s);
        }
        vector<vector<string>> out;
        for (auto x: mp){
            out.push_back(x.second);
        }
        return out;
    }
};

int main(){
    vector<string> vec = {"tea", "ate", "eat", "tan", "nat", "bat"};
    Solution s;
    for (vector v : s.groupAnagrams(vec)){
        for (string s : v){
            cout << s << " ";
        }
        cout << endl;
    }
    
    return 0;
}