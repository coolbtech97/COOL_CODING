#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=0;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i;c?i--:i++)
    {
        if(i==n+1)
        {
            i--;
            c=1;
        }
        for(j=1;i+j<=n;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<" *";
        cout<<endl;
    }
    return 0;
}