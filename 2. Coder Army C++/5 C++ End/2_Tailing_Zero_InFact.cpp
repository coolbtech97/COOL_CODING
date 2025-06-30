#include<iostream>
using namespace std;
int main()
{
    int n,f=1,c5=0;
    system("cls");
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
        f*=i;
    while(97)
    {
        if(f%5!=0)
            break;
        f/=5;
        c5++;
    }
        cout<<"Zero Tail is "<<c5;
    return 0;
}