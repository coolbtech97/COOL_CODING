// Function calling inside and outside the CLASS
#include<iostream>
using namespace std;
class bank{
    private:
    string name;
    int acc_num,balance;
    public:
    bank(){                             // Default Constructor
        name="";
        acc_num=0;
        balance=0;
    }
    bank(string name,int num,int bal){  // Constructor created by me
        this->name=name;
        acc_num=num;
        balance=bal;
    }
    void display(){             // Function inside the Class
        cout<<"Name: "<<name<<"\nAcc Num: "<<acc_num<<"\nBalance: "<<balance<<endl;
    }
    void deposit(int);          // Function outside the Class
};
void bank::deposit(int n){ //way of calling
    balance+=n;
}
int main(){
    system("cls");
    bank a1,a2;
    a1.deposit(200);
    a1.display();
}
// Why FUNCTION IS BEST USE
// for ex- if the user deposits -500
// what will happen then
// so, in the Function, I can check where the deposit amount is Positive or Not