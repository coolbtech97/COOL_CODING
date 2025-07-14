#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"Enter the value of N: ";
    int n;
    cin>>n;
    for(int i=1;n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            n--;
        }
    }
    return 0;
}