#include<iostream>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter the number : ";
    cin>>n;
    if(n<1)
    {
        cout<<"Not possible";
        return 0;
    }
    while(n>2)
    {
        if(n%2)
        {
            cout<<"Can't";
            return 0;
        }
        n/=2;
    }
    cout<<"Possible";
    return 0;
};