#include<iostream>
using namespace std;
int leap(int);
int main()
{
    int n;
    system("cls");
    cout<<"Enter the year : ";
    cin>>n;
    if(leap(n))
        cout<<"Not Leap Year";
    else
        cout<<"Leap year";
    return 0;
}
int leap(int l)
{
    if(l%400==0)
        return 0;
    if(l%4==0 && l%100!=0)
        return 0;
    return 1;
}