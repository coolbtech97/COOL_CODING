// Extra features for using Functions in Class
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float marks;
    void setname(string s){
        if(s.size()>0)
            name=s;
        else
            name="No Name";
    }
    void setmarks(float m){
        if(m>=0)
            marks=m;
        else
            marks=0;
    }
    void setroll(int r){
        if(r>0)
            roll=r;
        else
            roll=0;
    }
};
int main()
{
    system("cls");
    student s1;
    s1.setname("Rohit");
    s1.setroll(101);
    s1.setmarks(95.5);
    return 0;
}