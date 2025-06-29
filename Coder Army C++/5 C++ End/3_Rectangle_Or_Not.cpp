#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;;
    system("cls");
    cout<<"Enter 4 numbers : ";
    cin>>a>>b>>c>>d;
    if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))    cout<<"Rectangle";
    else    cout<<"Not Rectangle";
    return 0;
};