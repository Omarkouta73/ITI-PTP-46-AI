#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<int> st;
    vector<int> res(temperatures.size());
    for (int i=0; i<temperatures.size(); i++){
        
        while (!st.empty() && temperatures[st.top()] < temperatures[i]){
            int last_index = st.top();
            res[last_index] = i - last_index;
            st.pop();
        }
        
        st.push(i);
    }
    return res;
}

int main() {
    
    vector<int> in = {73, 74, 75, 71, 69, 72, 76, 73};
    for (int x: dailyTemperatures(in)){
        cout << x << " ";
    }
    
    
    return 0;
}