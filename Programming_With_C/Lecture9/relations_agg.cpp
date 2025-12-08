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
    Point *ul, *lr;

    public:
    Rectangle(){
        cout << "Rectangle Constructor is created" << endl;
    }
    ~Rectangle(){
        cout << "Rectangle is destrucetd" << endl;
    }

    void setPoints(Point* p1, Point* p2){
        this->ul = p1;
        this->lr = p2;
    }

    void print(){
        ul->print();
        lr->print();
    }
};

class Triangle {
    Point *p1, *p2, *p3;

    public:
    Triangle(){
        cout << "Triangle Constructor is created" << endl;
    }
    ~Triangle(){
        cout << "Triangle is destrucetd" << endl;
    }
    void setPoints(Point* p1, Point* p2, Point* p3){
        this->p1 = p1;
        this->p2 = p2;
        this->p3 = p3;
    }
    void print(){
        // cout << "================== TRIANGLE ==================" << endl;
        p1->print();
        p2->print();
        p3->print();
    }

};



int main(){
    cout << "================== POINTS ==================" << endl;
    Point p1(0,10);
    Point p2(30,0);
    Point p3;
    
    cout << "================== RECTANGLE ==================" << endl;
    Rectangle r;
    r.setPoints(&p1, &p2);
    r.print();

    cout << "================== TRIANGLE ==================" << endl;
    Triangle t;
    t.setPoints(&p1, &p2, &p3);
    t.print();

    cout << "================== DESTRUCTIONS ==================" << endl;

    return 0;
}