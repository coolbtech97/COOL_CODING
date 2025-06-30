#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;i+j<=n;j++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        for(j=i-1; j ;j--)
            cout<<j<<" ";

        cout<<endl;
    }
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