#include<iostream>
using namespace std;
int main()
{
    int n,N,binary=0,decimal=0,i=1,r;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    N=n;
// This while loop is correct converting from Binary to Decimal
// don't watch the If, Else condition
    while(n)
    {
        r=n%2;
        n/=2;
        if(r)
            r=0;
        else
            r=1;
        binary+=r*i;
        i*=10;
    }

// Now Convert back it to Decimal And print

    i=1;
    while(binary)
    {
        r=binary%10;
        binary/=10;
        //decimal*=10;      This is Wrong
        decimal+=r*i;
        i*=2;
    }
    
    cout<<"Complement of "<<N<<" is "<<decimal;

    return 0;
};