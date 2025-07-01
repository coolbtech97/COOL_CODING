#include<iostream>
void cls(){system("cls");}
using namespace std;
int main()
{

    cls();
    int b,i=1,n=0,r;
    b=1010;
    while(b)
    {
        r=b%10;
        b/=10;
        if(r)
            n+=i;
        i*=2;
    }
    cout<<n;
}