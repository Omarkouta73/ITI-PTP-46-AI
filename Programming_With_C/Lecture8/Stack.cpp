#include <iostream>
using namespace std;

class Stack {

    private:

    int size;
    int tos;
    int* arr;

    public:

    Stack(int size=5){
        this->size = size;
        this->tos = -1;
        arr = new int[size];
    }

    ~Stack(){
        cout << "Destructed" << endl;
        delete[] arr;
    }

    int push(int v){
        if (tos < this->size-1){
            tos++;
            arr[tos] = v;
            return 1;
        } else {
            cout << "Stack is full" << endl;
            return 0;
        }
    }

    int pop(int& d){
        if (tos > -1){
            d = arr[tos--];
            // tos--;
            return 1;
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int a;
    while (s.pop(a) != -1){
        cout << a << endl;
    }

    return 0;
}