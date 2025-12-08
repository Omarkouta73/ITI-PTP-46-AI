#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int area=0;
    int max_area = 0;
    heights.push_back(0);
    for (int i=0; i<heights.size(); i++){
        while (!st.empty() && heights[i] < heights[st.top()]){
            int height = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            area = height * width;
            max_area = max(max_area, area);
        }

        // stack is empty || still didn't find the smaller height
        st.push(i);
    }

    return max_area;
}

int main() {
    
    // vector<int> in = {2,1,5,6,2,3};
    vector<int> in = {2,1,2};
    cout << largestRectangleArea(in) << endl;
    
    
    return 0;
}