#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    double balance;
    int *p;

    // There is already a Default constructor created by Compiler
    // Or I can also create

    public: // IMP LINe

    // Default Constructor
    customer(){
        // cout<<"constructor runs"<<endl;
        name = "Anand";
        account_number=13133;
        balance = 100000;
        p = new int[100];  // Dynamic Memory Allocation
    }                      // Constructor is Also used for pointer large size allocation
    // Parameterized Constructor
    customer(string a,int b,double c){
        name = a;
        account_number = b;
        balance = c;
    }

    // Inline Constructor       [dont create multiple constructor with same parameters3]
    inline customer(string a,int b,double c): name(a),account_number(b),balance(c){}

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    system("cls");
    customer a1,a2,a3;
    a1.display();
    a2.display();
    a3.display();

    // Constructor with Parameters
    customer a4("Shubham",23233,50000);
    a4.display();
    return 0;
}
/*
Note--
Compiler automatically create an Default Constructor
If you create a constructor with parameters
The compiler will not create the Default Constructor

Means- create Default constructor and then create constructor with parameters......

Don't create multiple constructor with SAME PARAMETERS

Constructor Overloading-
    Multiple constructor with Different Parameters

Inline Constructor-
    inline class_name(Parameters): name(a),acc_num(b),balance(c){}

This->
    It Pointer stores the address of that OBJECT, which calls it
*/