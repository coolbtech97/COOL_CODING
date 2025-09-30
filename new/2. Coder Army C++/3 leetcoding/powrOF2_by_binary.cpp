#include<iostream>
using namespace std;
int main()
{
    int n,b=0,r,i=1,sum=0;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;

    while(n)
    {
        r=n%2;
        n/=2;
        b+=r*i;
        i*=10;
    }
    while(b)
    {
        sum+=b%10;
        b/=10;
    }

    if(sum==1)
        cout<<"Power Of N";
    else
        cout<<"Not power of N";
    return 0;
};