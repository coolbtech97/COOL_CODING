#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
    char name;
    system("cls");
    cout<<"Enter the size : ";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>=n+1)
                cout<<i<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
};