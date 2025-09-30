#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,s,n,x=1;
    system("cls");
    //cin>>n;
    n=5;
    s=n*2-1;
    for(i=1;i<=s;++i)
    {
        x=n;
            for(j=0;j<s;j++)
            {
            if(i==1||i==s) cout<<x<<" ";
            else{
            cout<<x<<" ";
            x--;
        }}
        cout<<endl;
    }
    cout<<endl;
    getch();
}