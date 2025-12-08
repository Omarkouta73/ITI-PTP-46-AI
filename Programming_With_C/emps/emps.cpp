#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <cstring>

using namespace std;

struct emp
{
    char name[20];
    int age;
    float salary;
};


int main(){
    int n=0;
    cout << "Enter number of employees: ";
    cin >> n;
    emp employees[n];
    for (int i=0; i<n; i++){
        cout << "Name:";
        cin >> employees[i].name;
        cout << "Age:";
        cin >> employees[i].age;
        cout << "Salary:";
        cin >> employees[i].salary;
        cout << "-------------------------" << endl;
    }

    for (int i=0; i<n; i++){
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "-------------------------" << endl;
    }

}