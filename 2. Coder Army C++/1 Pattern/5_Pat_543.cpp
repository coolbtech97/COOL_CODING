#include<iostream>
using namespace std;
int main()
{
    int i,j;
    system("cls");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<"  ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
};