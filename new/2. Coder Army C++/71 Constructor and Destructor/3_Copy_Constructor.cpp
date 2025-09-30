// COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class customer{
    string name;
    int id;
    public:
    customer(){
        name="";
        id=0;
    }
    customer(string name,int id){
        this->name=name;
        this->id=id;
    }
    customer(const customer &a){    // CREATE COPY CONSTRUCTOR
        name=a.name;                // remember to use & address of original
        id=a.id;                    // otherwise, it will call function-function-f....... ERROR
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
int main(){
    system("cls");
    customer a1("Anand", 101);// Copy Constructor is already present DEFAULT""
    customer a2(a1); // Copy Constructor
    a2=a1; // Copy Assignment Operator

    a2.display();
}