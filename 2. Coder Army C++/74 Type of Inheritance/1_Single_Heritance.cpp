// TYPE OF INHERITANCE---
// 1. single Ineritance
#include<iostream>
#include<conio.h>
using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"Function is Woring"<<endl;
    }
    human(){
        name="";
        age=0;
        cout<<"Human Constructor\n";
    }
    human(string n,int a){
        name=n;
        age=a;
    }
    ~human(){
        cout<<"Human Destructor\n";
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
class student: public human{
    int roll_number, fees;

    public:
    student(string name,int age,int roll, int fees): human(name,age)
    {//                                         ^^CALLS PARENT CONSTRUCTOR First**^^
        // this->name=name;                         ********************
        // this->age=age;                         human constructor will get called first
        roll_number=roll;
        this->fees=fees;
    }
    student(){
        cout<<"Student Constructor\n";
    }
    ~student(){
        cout<<"Student Destructor\n";
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};
int main(){
    system("cls");
    student a1("Anand",21,29,1000);// Only calls the Human Constructor
    student a2;                     // CALLS THE TWO CONSTRUCTORS****
    a1.work();
    a1.display();
    // Go to student class to find DISPLAY function,
    // if not found
    // Then it will go to its PARENT CLASS
    getch();
}