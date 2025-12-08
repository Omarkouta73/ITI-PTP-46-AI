#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <string>
using namespace std;

char getch() {
    char buf = 0;
    struct termios old = {0};
    tcgetattr(STDIN_FILENO, &old);
    old.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &old);
    read(STDIN_FILENO, &buf, 1);
    old.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSADRAIN, &old);
    return buf;
}

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

void textattr(int i) {
    // Reset
    if (i == 0) {
        cout << "\033[0m";
        return;
    }

    // Map of color codes (example)
    switch (i) {
        case 1: cout << "\033[31m"; break; // Red
        case 2: cout << "\033[32m"; break; // Green
        case 3: cout << "\033[33m"; break; // Yellow
        case 4: cout << "\033[34m"; break; // Blue
        case 5: cout << "\033[35m"; break; // Magenta
        case 6: cout << "\033[36m"; break; // Cyan
        case 7: cout << "\033[37m"; break; // White
        default: cout << "\033[0m"; break; // Reset
    }
}

struct emp
{
    char name[20];
    int age;
    float salary;
};

void read(emp*& employees, int& currentSize, int& capacity){
    cout << "employee" << employees << endl;
    int newEmployees;
    cout << "Enter number of employees to add: ";
    cin >> newEmployees;
    cin.ignore();
    
    if (currentSize + newEmployees > capacity) {
        int newCapacity = currentSize + newEmployees;
        emp* temp = new emp[newCapacity];
        
        for (int i = 0; i < currentSize; i++) {
            temp[i] = employees[i];
        }

        delete[] employees;
        
        employees = temp;
        capacity = newCapacity;
    }
    
    // Add
    for (int i = 0; i < newEmployees; i++){
        cout << "Employee " << (currentSize + i + 1) << ":" << endl;
        cout << "Name: ";
        cin.getline(employees[currentSize + i].name, 20);
        cout << "Age: ";
        cin >> employees[currentSize + i].age;
        cout << "Salary: ";
        cin >> employees[currentSize + i].salary;
        
        cout << "-------------------------" << endl;
        cin.ignore();
    }
    
    currentSize += newEmployees;
}

void display(emp* employees, int n){
    if (n == 0){
        cout << "There are no employees yet" << endl;
    }
    for (int i=0; i<n; i++){
        cout << "Employee " << (i + 1) << ":" << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "-------------------------" << endl;
    }
}


int main(){
    int hindex = 0;
    char menu[3][10] = {"new", "display", "exit"};
    bool running = true;
    bool flag = true;
    
    int capacity = 10;
    int n = 0;
    emp* employees = new emp[capacity];
    
    while (running){
        if (flag){
            system("clear");
        }
        for (int i=0; i<3; i++){
            gotoxy(10, i+2);
            if (hindex == i){
                textattr(1);
            }
            cout << menu[i] << endl;
            textattr(7);
        }
        char key = getch();
        if (key == 27){
            if (getch() == 91){
                switch (getch())
                {
                case 65: // up
                    hindex--;
                    if (hindex < 0){
                        hindex = 2;
                    }
                    break;
                
                case 66: // down
                    hindex++;
                    if (hindex > 2){
                        hindex = 0;
                    }
                    break;
                }
            }
        } else if (key == 10){
            system("clear");
            gotoxy(10, 5);
            switch (hindex) {
                case 0:
                    cout << "ADD NEW EMPLOYEE\n";
                    read(employees, n, capacity);
                    break;
                case 1:
                    cout << "DISPLAY EMPLOYEES\n";
                    display(employees, n);
                    break;
                case 2:
                    cout << "Quiting...\n";
                    running = false;
                    break;
            }

            if (running) {
                cout << "\nPress any key to go back to menu...";
                cout.flush(); 
                getch();
            }

        }
    }
    
    delete[] employees;
    
    return 0;
}