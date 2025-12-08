#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
private:
    int num;
    int den;


public:
    Fraction(int numerator = 0, int denominator = 1) {
        if (denominator == 0) {
            cout << "Denominator cannot be zero!" << endl;
            den = 1;
        } else {
            num = numerator;
            den = denominator;
        }
    }

    Fraction add(Fraction& other) {
        int new_num = num * other.den + other.num * den;
        int new_den = den * other.den;
        return Fraction(new_num, new_den);
    }

    void simplify() {
        int g = gcd(num, den);
        num /= g;
        den /= g;
    }

    void print() const {
        if (den == 1)
            cout << num;
        else
            cout << num << "/" << den;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    cout << "x1: "; 
    f1.print();
    cout << endl;
    cout << "x2: "; 
    f2.print(); 
    cout << endl;

    Fraction sum = f1.add(f2);
    cout << "Sum = ";
    sum.print();
    sum.simplify();
    cout << " = "; sum.print(); cout << endl;

    Fraction f3(6, 8);
    cout << "Before simplify: "; f3.print(); cout << endl;
    f3.simplify();
    cout << "After simplify: "; f3.print(); cout << endl;

    return 0;
}
