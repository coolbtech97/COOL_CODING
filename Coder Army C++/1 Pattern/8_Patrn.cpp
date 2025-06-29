#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            cout<<"  ";
        for(j=1;i*2+j<n*2;j++)
            cout<<"* ";

        cout<<endl;
    }
    return 0;
}

/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/