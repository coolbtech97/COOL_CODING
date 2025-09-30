// char a[]={ 'A','P','P','L','E'};
// very badd
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    string s,s1,s2;
    // string name="ANAND KUMAR";
    // name[4]=0;
    // name[3]=0;
    // cout<<name<<endl;

    s1="Anand", s2="Kumar";
    s=s1+s2;                // AnandKumar
    s=s1.append(s2);        // AnandKumar
    s.push_back(65);        // AnandKumarA
    s.pop_back();           // AnandKumar
    

}