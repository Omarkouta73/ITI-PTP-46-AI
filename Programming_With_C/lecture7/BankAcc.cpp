#include <iostream>
using namespace std;

class Account {
    private:
        int id;
        string name;
        float balance;

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

        float getBalance(){
            return balance;
        }
        void setBalance(float balance_v){
            balance = balance_v;
        }


        void print(){
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main(){

    Account acc;

    acc.setID(1);
    acc.setName("Omar Kouta");
    acc.setBalance(2000);

    acc.print();
    
    return 0;
}