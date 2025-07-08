#include<iostream>
using namespace std;
int main()
{
    system("cls");
    long long int ans=1;
    int i=0,n,p;
    cout<<"Enter the number and the power :";
    cin>>n>>p;
    while(i<p)
    {
        ans*=n;
        i++;
    }
    cout<<ans;
    return 0;
}