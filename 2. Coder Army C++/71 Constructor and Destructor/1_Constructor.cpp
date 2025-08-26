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
    customer(){               // Constructor [ It always present Default ]
        name = "";
        account_num = 0;
        balance = 0;
    }
};
int main(){
    system("cls");
    customer a1;
    cout<<a1.name<<endl;
}