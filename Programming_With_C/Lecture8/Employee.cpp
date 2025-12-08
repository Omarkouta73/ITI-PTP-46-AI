#include <iostream>
using namespace std;

class Employee {
    private:
        static int nextID;
        int id;
        string name;
        int age;
        float salary;

    public:

        Employee(){
            this->id = ++nextID;
            this->name = " ";
            this->age = 0;
            this->salary = 0.0;
        }

        Employee(string name){
            this->id = ++nextID;
            this->name = name;
        }
        Employee(string name, int age){
            this->id = ++nextID;
            this->name = name;
            this->age = age;
        }
        Employee(string name, int age, float salary){
            this->id = ++nextID;
            this->name = name;
            this->age = age;
            this->salary = salary;
        }

        int getID(){
            return id;
        }
        void setID(int id_v){
            if (id_v >= 0){
                id = id_v;
            } else {
                cout << "Invalid ID" << endl;
            }
        }

        string getName(){
            return name;
        }
        void setName(string name_v){
            name = name_v;
        }

        int getAge(){
            return age;
        }
        void setAge(int age_v){
            age = age_v;
        }

        float getSalary(){
            return salary;
        }
        void setSalary(float salary_v){
            salary = salary_v;
        }


        void print(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
            cout << "----------------------------------" << endl;
        }
};

int Employee::nextID = 0;

int main(){

    Employee e1("Omar", 22, 20000);
    Employee e2("Mohamed", 30, 25000);
    Employee e3("Ahmed", 18, 12000);

    e1.print();
    e2.print();
    e3.print();

    cout << sizeof(Employee) << endl;
    cout << sizeof(Employee*) << endl;
    
    return 0;
}