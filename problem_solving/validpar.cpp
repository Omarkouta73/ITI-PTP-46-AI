#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;


// ({})
// 



bool isValid(string s) {
    if (s.length() < 2) return false;
    stack<char> st;
    for (char c : s){
        if (c == '(' || c == '[' || c == '{'){
            st.push(c);
        } else {
            char top = ' ';
            if (!st.empty()){
                top = st.top();
            }
            else{
                return false;
            }
            if (c != ')' && top == '(') return false;
            else if (c != ']' && top == '[') return false;
            else if (c != '}' && top == '{') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    cout << isValid("()") << endl;
    
    
    return 0;
}