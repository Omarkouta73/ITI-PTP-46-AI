#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int img;

    public:
        int getReal(){
            return real;
        }
        void setReal(int n){
            real = n;
        }

        int getImg(){
            return img;
        }
        void setImg(int n){
            img = n;
        }

        Complex add(Complex c) {
            Complex result;
            result.real = real + c.real;
            result.img = img + c.img;
            return result;
        }

        void print(){
            if (img > 0){
                cout << real << " + " << img << "j" << endl;
            } else if (img < 0){
                cout << real << img << "j" << endl;
            } else {
                cout << real << endl;
            }
        }
};

Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.setReal(c1.getReal() - c2.getReal());
    result.setImg(c1.getImg() - c2.getImg());
    return result;
}

// Standalone function to print a complex number
void print(Complex c) {
    if (c.getImg() > 0) {
        cout << c.getReal() << " + " << c.getImg() << "j" << endl;
    } else if (c.getImg() < 0) {
        cout << c.getReal() << " " << c.getImg() << "j" << endl;
    } else {
        cout << c.getReal() << endl;
    }
}

int main(){

    Complex c1, c2, sum, diff;

    c1.setReal(5);
    c1.setImg(-10);

    c2.setReal(3);
    c2.setImg(7);

    sum = c1.add(c2);
    diff = subtract(c1, c2);

    cout << "First: ";
    c1.print();

    cout << "Second: ";
    c2.print();

    cout << "Sum: ";
    sum.print();

    cout << "Diff: ";
    diff.print();

    print(diff);

    return 0;
}