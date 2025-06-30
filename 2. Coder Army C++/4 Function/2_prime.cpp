#include<iostream>
using namespace std;
bool prime(int x)
{
    if(x<2)
        return 0;
    for(int i=2;i<x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    system("cls");
    cout<<"Enter the number to check Prime : ";
    cin>>n;
    if(prime(n))
        cout<<"Prime Number";
    else
        cout<<"Not Prime Number";
    return 0;
}