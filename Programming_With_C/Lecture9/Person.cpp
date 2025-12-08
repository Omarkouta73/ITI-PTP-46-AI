#include <iostream>
#include <string>

using namespace std;

class Person{
    protected:
    int id, age;
    string name;

    public:
    Person(){
        id = 0;
        name = "No Name";
        age = 0;
    }
    Person(int id, string name, int age){
        this->id = id;
        this->name = name;
        this->age = age;
    }
    void setID(int id){
        this->id = id;
    }
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void print() {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age;
    }
};

class Employee: public Person{
    float salary;
    public:
    Employee(): Person(){this->salary=0.0;}
    Employee(int id, string name, int age, float salary): Person(id, name, age){
        this->salary = salary;
    }
    void setSalary(float salary){
        this->salary = salary;
    }
    float getSalary(){
        return this->salary;
    }
    void print() {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

class Student: public Person{
    float grade;
    public:
    Student(): Person(){this->grade=0.0;}
    Student(int id, string name, int age, float grade): Person(id, name, age){
        this->grade = grade;
    }
    void setGrade(float salary){
        this->grade = grade;
    }
    float getGrade(){
        return this->grade;
    }
    void print() {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};



int main(){
    
    cout << "================== Employee ==================" << endl;
    Employee emp(0, "Omar", 22, 10000);
    emp.print();

    cout << "================== Student ==================" << endl;
    Student s(0, "Omar", 22, 88);
    s.print();

    // cout << "================== DESTRUCTIONS ==================" << endl;

    return 0;
}