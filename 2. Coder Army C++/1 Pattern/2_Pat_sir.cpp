#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    system("cls");
    // cout<<"Enter the number : ";
    // cin>>n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
};