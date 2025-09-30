#include<iostream>
using namespace std;
int main()
{
    int n,N,sum=0;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    N=n;

    while(n)
    {
        sum*=10;
        sum+=n%10;
        n/=10;
    }
    if(N==sum)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
};