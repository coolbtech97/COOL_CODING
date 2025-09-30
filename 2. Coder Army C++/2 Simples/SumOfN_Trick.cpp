// SUM OF N NUMBERS using formula
#include<iostream>
using namespace std;
int main()
{
    int n,s;
    system("cls");
    cout<<"Enter the value of n : ";
    cin>>n;
    s = (n*(n+1)) /2;
    cout<<endl<<"Sum of Numbers from 1 to "<<n<<" is "<<s;
    return 0;
}