// Reverse a number
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int nk=1234,m=0,r;
    while(nk)
    r=nk%10,nk/=10,m*=10,m+=r;
    cout<<m;
}