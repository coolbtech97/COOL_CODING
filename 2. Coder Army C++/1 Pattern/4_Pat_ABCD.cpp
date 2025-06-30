#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    system("cls");
    char c;// cout<<"Enter the size : ";
    // cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            c='A'+(j-1);
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
};