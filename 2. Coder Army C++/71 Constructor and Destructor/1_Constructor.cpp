// Constructor
// It is a special Fn that is involved in invoked automatically at the time of object creation
// Name of the constructor should be same as class Name
// It doesn't have any return type
// It is used to initialize the value
#include<iostream>
using namespace std;
class customer{
    public:
    string name="";
    int account_num;
    int balance;
    int discount;
    customer(){               // Constructor [ It always present Default ]
        name = "";
        account_num = 0;      // Can make MULTIPLE constructors
        balance = 0;
    }
    customer(const string &nam, int account_num, int balance){  // Parameterized Constructor
        /*this->*/name = nam;
        this->account_num = account_num;
        this->balance = balance;
    }

};
int main(){
    system("cls");
    string n="cool";
    customer a1;
    customer a2("anand", 12345,0);// create and initialize a customer object
}