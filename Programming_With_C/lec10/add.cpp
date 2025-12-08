#include <iostream>
using namespace std;

class Parent {
protected:
    int x, y;

public:
    Parent(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    int add() {
        return x + y;
    }

    void print() {
        cout << "x = " << x << ", y = " << y << ", sum = " << add() << endl;
    }
};

class Child : public Parent {
    int z;

public:
    Child(int x = 0, int y = 0, int z = 0) : Parent(x, y) {
        this->z = z;
    }

    int add() {
        return x + y + z;
    }

    void print() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << ", total sum = " << add() << endl;
    }
};

int main() {
    Parent p(10, 20);
    cout << p.add() << endl;

    Child c(10, 20, 30);
    cout << c.add() << endl;

    return 0;
}
