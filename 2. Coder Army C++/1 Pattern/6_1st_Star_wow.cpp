#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<". ";
        for(j=1;j<=n-i;j++)
            cout<<"  ";
        for(j=1;j<=i*2-1;j++)
            cout<<"* ";
        if(i!=n)
            cout<<endl;
    }
    getch();
    return 0;
};
/*
         working

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

*/