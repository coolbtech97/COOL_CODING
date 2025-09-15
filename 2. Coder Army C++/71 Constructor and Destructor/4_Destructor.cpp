// Destructor
// It is an instance member function that is invoked automatically whenever an object is going to be destroyed.
// It is a last function that is going to be called before an object is destroyed.// ORIGINAL DEFINATION
#include<iostream>
using namespace std;
class customer{
    string name;
    int *balance;
    public:
    customer(string name,int bal){
        this->name=name;
        balance = new int; // DYNAMIC MEMORY ALLOCATION
        *balance=bal;
    }
    ~customer(){  // DESTRUCTOR
        delete balance; // FREE DYNAMIC MEMORY
    }
    // There is DEFAULT Destructor
    // It will be called automatically when the object goes out of scope
    
    // 1 Destructor ONLY***
    // No Parameters pass***
    // Destructor actually does not deletes anything, IT ONLY RELEASE MEMORY********
    // DELETION WILL PERFORM AUTOMATICALLY DEFAULTLY form Stack after the END OF main()

    // IT WILL GOOD TO NOT"" CREATE DESTRUCTOR
    // IF YOU CREATE THAN *REMEMBER TO RELASE ALL DYNAMIC MEMORY
};