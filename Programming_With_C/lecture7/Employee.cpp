#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        string name;
        int age;
        float salary;

    public:
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
        }
};

int main(){

    Employee emp;

    emp.setID(1);
    emp.setName("Omar Kouta");
    emp.setAge(22);
    emp.setSalary(20000);

    emp.print();
    
    return 0;
}