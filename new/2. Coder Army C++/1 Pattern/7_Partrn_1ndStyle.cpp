#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,c;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;i+j<=n;j++)
            cout<<"  ";
        c=0;
        for(j=1;j;c?j--:j++)
        {
            cout<<j<<" ";
            if(i==j)
            {
                c=1;
            }
        }
        cout<<endl;
    }
    getch();
    return 0;
}
/*
         working

            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/