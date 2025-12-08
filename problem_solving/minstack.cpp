#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

class MinStack {
    std::vector<int> arr;
    int tos;
public:
    MinStack() {
        tos = -1;
    }
    
    void push(int val) {
        tos++;
        arr.push_back(val);
    }
    
    void pop() {
        if (tos >= 0){
            arr.erase(arr.begin()+tos);
            tos--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
    
    int top() {
        if (tos >= 0){
            return arr[tos];
        }
        return -1;
    }
    
    int getMin() {
        if (tos >= 0){
            auto el = min_element(arr.begin(), arr.end());
            return *el;
        }
        return -1;
    }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);
    obj->push(5);
    obj->pop();
    int param_3 = obj->top(); // 4
    int param_4 = obj->getMin(); // 1

    cout << param_3 << endl << param_4 << endl;

    return 0;
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
