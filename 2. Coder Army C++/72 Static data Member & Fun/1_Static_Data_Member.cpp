// (constructor is used to initialize the data members)

// Static Data Member
// They are attribute of classes or class member
// It is declared using static keyword
// Only one copy of that member is created for the entire class & is shared by all the object
// It is initialized before any object of this class is created
#include <iostream>
using namespace std;
class customer{
    string name;
    int acc_num,balance;
    public:
    static int total;
    customer(){//remember to create default constructor also
        name="";
        acc_num=1;
        balance=0;
        total=0;
    }
    customer(string a,int b,int c){
        name=a;
        acc_num=b;
        balance=c;
        total++;
    }
};
int main(){
    customer a1("Rohit", 1, 1000);
    customer a2("Anand", 2, 2000);
    cout<<a1.tota
    return 0;
}