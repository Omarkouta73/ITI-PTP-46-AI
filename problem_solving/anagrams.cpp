#include <iostream>
#include <algorithm> 
#include <vector>
#include <map>


using namespace std;


bool isAnagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main(){
    cout << isAnagram("anagram", "anagram") << endl;
    
    return 0;
}