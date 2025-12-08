#include <iostream>
using namespace std;

class Point {
    private:
    int x, y;

    public:
    Point(){
        cout << "POINT:: Parameterless counstructor" << endl;
        this->x = this->y = 0;
    }
    Point(int x, int y){
        cout << "POINT:: 2 parameters counstructor" << endl;
        this->x = x;
        this->y = y;
    }

    int getX(){
        return this->x;
    }
    void setX(int x){
        this->x = x;
    }

    void setY(int y){
        this->y = y;
    }
    int getY(){
        return this->y;
    }

    void setPoint(int x, int y){
        this->setX(x);
        this->setY(y);
    }

    void print(){
        cout << "(" << this->x << "," << this->y << ")" << endl;
    }

    ~Point(){
        cout << "Point destructed" << endl;
    }
};

class Rectangle {
    Point ul, lr;

    public:
    Rectangle(){
        cout << "Rectangle Constructor is created" << endl;
    }
    Rectangle(int x1, int y1, int x2, int y2):ul(x1,y1),lr(x2,y2)
    {
        cout << "4 parameters Rectangle Constructor is created" << endl;
    }
    ~Rectangle(){
        cout << "Rectangle is destrucetd" << endl;
    }
    void print(){
        // cout << "================== Rectangle ==================" << endl;
        ul.print();
        lr.print();
    }
};

class Triangle {
    Point p1, p2, p3;

    public:
    Triangle(){
        cout << "Triangle Constructor is created" << endl;
    }
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3):p1(x1,y1),p2(x2,y2),p3(x3,y3)
    {
        cout << "6 parameters Triangle Constructor is created" << endl;
    }
    ~Triangle(){
        cout << "Triangle is destrucetd" << endl;
    }
    void print(){
        // cout << "================== TRIANGLE ==================" << endl;
        p1.print();
        p2.print();
        p3.print();
    }

};

class Circle {
    Point center;
    int radius;

    public:
    Circle(){
        this->radius = 1;
        this->center.setPoint(0,0);
        cout << "Circle Constructor is created" << endl;
    }
    Circle(int x1, int y1, int radius):center(x1,y1)
    {
        this->radius = radius;
        cout << "3 parameters Circle Constructor is created" << endl;
    }
    ~Circle(){
        cout << "Circle is destrucetd" << endl;
    }
    void print(){
        // cout << "================== Circle ==================" << endl;
        center.print();
        cout << "Radius: " << this->radius << endl;
    }
};


int main(){
    
    cout << "================== RECTANGLE ==================" << endl;
    Rectangle r(0,10,20,0);
    r.print();

    cout << "================== TRIANGLE ==================" << endl;
    Triangle t(0,0,10,0,5,5);
    t.print();

    cout << "================== CIRCLE ==================" << endl;
    Circle c(10,10,5);
    c.print();

    cout << "================== DESTRUCTIONS ==================" << endl;

    return 0;
}