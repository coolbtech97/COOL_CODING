#include<iostream>
// #include<stdio.h>
using namespace std;
int main()
{
    int n,i=1,check=1;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;

    if(n<1)
    {
        cout<<"Not Possible";
        return 0;
    }
    while(i<n)
        i*=2;
    if(i==n)
        cout<<"power of 2";
    else
        cout<<"Not Power of 2";
    return 0;
};