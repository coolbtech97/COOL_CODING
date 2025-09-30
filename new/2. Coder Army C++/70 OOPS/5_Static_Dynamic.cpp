// Static vs Dnamic Memory Allocation
#include<iostream>
using namespace std;
class student{
    public:
    string name="",grade="";
    int age,roll;
};
int main()
{
    system("cls");
    student *s = new student;   // Dynamic Memory Allocation
    s->name = "John";
    s->age = 20;
    s->roll = 101;
    s->grade = "A";
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->roll << endl;
    cout << s->grade << endl;
    delete s;  // Free the allocated memory
    return 0;
}