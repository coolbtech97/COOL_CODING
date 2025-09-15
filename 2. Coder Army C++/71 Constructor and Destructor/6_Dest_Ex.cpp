// VERY IMPORTANT CODE             constructor works on simple order
// RUN IT  [comment 17th line]***   destructor works on ""REVERSE ORDER""
#include<iostream>//                because of DEPENDENCY
using namespace std;//              Maybe the Last OBJECT using the First OBJECT
class customer{
    string name;
    int *data;
    // constructor
    public:
    customer()//default constructor created
    {
        name = " ********** ";
        data = new int[100];  // allocate memory
        cout<<"Default Constructor Called for "<<name<<endl;
    }
    customer(string name){
        this->name = name;
        cout<<"Constructor Called for "<<name<<endl;

    }
    ~customer(){
        //delete data;  //Unomment IT THEN CHECK WOW WOW WOW WOW WOW WOW
        cout<<"Destructor Called for "<<name<<endl;
    }
};
int main()
{
    customer a1("Anand"), a2("Kumar"),a3("Rajak");

    // Dynamic Memory Allocate to OBJECT

       customer *a4 = new customer;
    // customer *a5 = new customer("Anand Kumar Rajak");
}