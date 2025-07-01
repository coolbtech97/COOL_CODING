#include<iostream>
using namespace std;
int main()
{
    int i=1,j,s=5;
    system("cls");
     cout<<"Height : ";
     cin>>s;
    while(97)
    {   // Designing
        if(i<10)
            cout<<" ";
        cout<<i<<". ";

        for(j=s;j>=i;j--)
            cout<<"  ";

        if(i==s)
            break;

        cout<<"* ";
        for(j=1;j<=i*2-3;j++)
            cout<<"  ";
        if(i!=1)
            cout<<"* ";
        cout<<endl;
        i++;
    }
    for(j=1;j<s*2;j++)
        cout<<"* ";
    return 0;
};