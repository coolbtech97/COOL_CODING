#include<iostream>
using namespace std;
int main()
{
    int i,j,n,c=0;
    system("cls");
    cout<<"Enter the size : ";
    cin>>n;
    for(i=1;i;c?i--:i++)
    {
        if(i==n+1)
        {
            i--;
            c=1;
        }
        for(j=1;i+j<=n+1;j++)
            cout<<"* ";
        for(j=1;j<=i*2-2;j++)
            cout<<"  ";
        for(j=1;i+j<=n+1;j++)
            cout<<"* ";

        cout<<endl;
    }
    return 0;
}