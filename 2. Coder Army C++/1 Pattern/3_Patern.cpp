#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    system("cls");
    cout<<"Enter the height : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
};