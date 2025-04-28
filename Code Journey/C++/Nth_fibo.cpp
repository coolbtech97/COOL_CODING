#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    system("cls");
    cout<<"Enter that term :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<n<<" term is : "<<a;
    return 0;
};