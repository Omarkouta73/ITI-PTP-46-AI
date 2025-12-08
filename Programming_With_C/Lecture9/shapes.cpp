#include <iostream>
using namespace std;

class Shape{
    int dim1, dim2;

    public:
    Shape(){
        this->dim1=0;
        this->dim2=0;
    }
    Shape(int dim1){
        this->dim1=dim1;
    }
    Shape(int dim1, int dim2){
        this->dim1=dim1;
        this->dim2=dim2;
    }
    void setDim1(int dim1){
        this->dim1=dim1;
    }
    void setDim2(int dim2){
        this->dim2=dim2;
    }
    int getDim1(){
        return this->dim1;
    }
    int getDim2(){
        return this->dim2;
    }
};

class Rectangle: public Shape{
    public:
    Rectangle(int width, int height): Shape(width, height){}
    int area(){
        return getDim1() * getDim2();
    }
    
};

class Circle: public Shape{
    public:
    Circle(int radius): Shape(radius){}
    float area(){
        return 3.14 * getDim1() * getDim1();
    }
    
};

class Triangle: public Shape{
    public:
    Triangle(int base, int height): Shape(base, height){}
    float area(){
        return 0.5 * getDim1() * getDim2();
    }
    
};



int main(){
    
    cout << "================== RECTANGLE ==================" << endl;
    Rectangle r(10, 20);
    cout << r.area() << endl;

    cout << "================== TRIANGLE ==================" << endl;
    Triangle t(10, 8);
    cout << t.area() << endl;

    cout << "================== CIRCLE ==================" << endl;
    Circle c(5);
    cout << c.area() << endl;

    // cout << "================== DESTRUCTIONS ==================" << endl;

    return 0;
}