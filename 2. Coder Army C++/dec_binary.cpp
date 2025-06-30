#include<iostream>
void cls(){system("cls");}
using namespace std;
int main()
{

    cls();
    int n,r,i=1,b=0;

    n=10;
    // cin>>n;
    while(n)
    {
        r=n%2;
        n/=2;
        r*=i;
        i*=10;
        b+=r;
    }
    cout<<b;
}