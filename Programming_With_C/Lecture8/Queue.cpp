#include <iostream>
using namespace std;

class Queue {
private:
    int size;
    int first;
    int last;
    int* arr;

public:
    Queue(int size = 5) {
        this->size = size;
        first = 0;
        last = -1;
        arr = new int[size];
    }

    ~Queue() {
        cout << "Destructed" << endl;
        delete[] arr;
    }

    int enqueue(int v) {
        if (last >= this->size-1) {
            cout << "Queue is full" << endl;
            return 0;
        }
        else{
            last++;
            arr[last] = v;
            return 1;
        }
    }

    bool dequeue(int& d) {
        if (first > last){
            cout << "empty" << endl;
            return 0;
        } else {
            d = arr[first++];
            return 1;
        }
    }
};

int main() {
    Queue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    int a = 0;
    while (q.dequeue(a)) {
        cout << a << endl;
    }

    return 0;
}
