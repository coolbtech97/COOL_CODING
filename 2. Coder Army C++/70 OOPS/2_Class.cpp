// CLASS
// It is a user defined Data Type
// Blueprint for creating Objects
#include<iostream>
using namespace std;
class student{
    public:
    string name="";
    private:
    int age=0;
    public:
    int roll=0;
    void setname(const string &n)
    {
        name=n;
    }
    void setroll(const int &r)
    {
        roll=r;
    }
    void setage(const int &a)
    {
        age=a;
    }
};
int main()
{
    system("cls");
    student s1,s2,s3;   // Object Creation
    s1.setname("Rohit");
    s1.setage(10);
    //cout<<s1.age<<endl;
    return 0;
}