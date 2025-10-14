// Simple Program
#include<iostream>
using namespace std;
class human{
    private:
    string relgion, color;
    public:// PRIVATE: privates are cannot be Inheritable**wow mom wow mom
    string name;
    int age, weight;
};
class student: public human{
    private:
    int roll_number, fees;
    public:
    student(){      // Default Constructor
        name="",age=0,weight=0,roll_number=0,fees=0;
    }               // Constructor with defferent parameters
    student(string name,int age,int weight, int roll_number,int fees){
        this->name=name;
        this->age=age;              // **** Can use this-> operator for accessing
        this->weight=weight;        // **** wow wow wow wow
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void fun(string n,int a,int w){
        name=n;
        age=a;
        weight=w;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
    }
};
class teacher: public human{
    int sallery, id;
};
int main(){
    system("cls");
    student A;
    A.name="Anand";
    A.fun("cool",21,59);
    A.display();
    teacher b;
    b.name="sonu";
}