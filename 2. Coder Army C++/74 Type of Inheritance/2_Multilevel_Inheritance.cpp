// Multilevel Inheritance
#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    public:
    void introduction(){
        cout<<"My name is "<<name<<endl;
    }
};
class employ:public person{
    protected:
    int salary;
    public:
    void monthly_salary(){
        cout<<"My monthly salery is "<<salary<<endl;
    }
};
class manager:public employ{
    public:
    string department;
    // constructor
    manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
    }
    void work(){
        cout<<"I am leading the department "<<department<<endl;
    }
};

int main(){
    system("cls");
    manager a1("Anand",200,"Finance");
    a1.work();
    a1.monthly_salary();// Not found in manager -> go to EMPLOY
    a1.introduction();// Not found in manager -> Employ -> PERSON
                        //                      Function is PUBLIC****
}