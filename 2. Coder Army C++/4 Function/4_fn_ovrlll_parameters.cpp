#include<iostream>
using namespace std;
int add(int x, int y)               // FUNCTION NAME IS SAME
{                                   // but...
    return x+y;                     // Different types of PARAMETERS are here
}
float add(float m, float n)
{
    return m+n;
}
int main()
{
    int a = 1, b = 2;
    float f = 2.4, f2 = 5.2;
    system("cls");
    cout<<add(a,b);
    cout<<endl;
    cout<<add(f,f2);
    return 0;
};