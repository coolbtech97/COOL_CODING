// OOPS
// Object Oriented Programming
// It is an approach Or a programming pattern where the programs are structured around Object rather than Function and Logic.
#include<iostream>
using namespace std;
class student{
    public:             // Default me private hota he  [ Access Modifier ]
    string name="";     // It can be public / private / protected
    int roll=0;
    float marks=0.0;
};                      // Class can store "Data" as well as "Function"
int main()
{
    system("cls");
    student s[20];
    s[0].name="Ravi";
    cout<<s[0].name<<endl;
    s[1].name="Rahul";
    cout<<s[1].name<<endl;
    s[2].name="Rani";
    cout<<s[2].name<<endl;
    s[3].name="Rita";
    cout<<s[3].name<<endl;
    s[4].name="Rohan";
    cout<<s[4].name<<endl;
    s[5].name="Ravi";
    cout<<s[5].name<<endl;
    s[6].name="Rahul";
    cout<<s[6].name<<endl;
    s[7].name="Rani";
    cout<<s[7].name<<endl;
    s[8].name="Rita";
    cout<<s[8].name<<endl;
    s[9].name="Rohan";
    cout<<s[9].name<<endl;
    s[10].name="Ravi";
    cout<<s[10].name<<endl;
    s[11].name="Rahul";
    cout<<s[11].name<<endl;
    s[12].name="Rani";
    cout<<s[12].name<<endl;
    s[13].name="Rita";
    cout<<s[13].name<<endl;
    s[14].name="Rohan";
    cout<<s[14].name<<endl;
    s[15].name="Ravi";
    cout<<s[15].name<<endl;
    s[16].name="Rahul";
    cout<<s[16].name<<endl;
    s[17].name="Rani";
    cout<<s[17].name<<endl;
    s[18].name="Rita";
    cout<<s[18].name<<endl;
    s[19].name="Rohan";
    cout<<s[19].name<<endl;
}