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

    virtual float area()=0;
    virtual void print()=0;
};

class Rectangle: public Shape{
    public:
    Rectangle(int width, int height): Shape(width, height){}
    float area(){
        return getDim1() * getDim2();
    }
    void print(){
        cout << "dim1 = " << this->getDim1() << endl;
        cout << "dim2 = " << this->getDim2() << endl;
        cout << "area = " << this->area() << endl;
    }
    
};

class Circle: public Shape{
    public:
    Circle(int radius): Shape(radius){}
    float area(){
        return 3.14 * getDim1() * getDim1();
    }
    void print(){
        cout << "radius = " << this->getDim1() << endl;
        cout << "area = " << this->area() << endl;
    }
    
};

class Triangle: public Shape{
    public:
    Triangle(int base, int height): Shape(base, height){}
    float area(){
        return 0.5 * getDim1() * getDim2();
    }
    void print(){
        cout << "base = " << this->getDim1() << endl;
        cout << "heigh = " << this->getDim2() << endl;
        cout << "area = " << this->area() << endl;
    }
    
};


void printShape(Shape& s){
    s.print();
}

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

    cout << "================== PRINT FUNCTION ==================" << endl;
    printShape(r);
    cout << "==================" << endl;
    printShape(t);
    cout << "==================" << endl;
    printShape(c);
    cout << "==================" << endl;

    cout << "================== ARRAY OF SHAPES ==================" << endl;

    Shape* shapes[3];
    shapes[0] = new Rectangle(10, 20);
    shapes[1] = new Triangle(10, 8);
    shapes[2] = new Circle(5);

    for (int i = 0; i < 3; i++) {
        shapes[i]->print();
        cout << endl;
    }

    return 0;
}