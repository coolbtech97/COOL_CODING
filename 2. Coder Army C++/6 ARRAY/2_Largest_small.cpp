#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a[5],small=INT_MAX,large=INT_MIN,i=0;
    // without INT_MAX , i can put the value of a[0],Then Check from a[1]
    // without INT_MIN , i can put the value of a[0],Then Check from a[1]
    cout<<"Enter 5 numbers : ";
    for(;;)
    {
        if(i==5)    break;
        cin>>a[i];
        if(a[i]<small)  small=a[i];
        if(a[i]>large)  large=a[i];
        ++i;
    }
    cout<<"The smallest number is "<<small;
    cout<<"\nThe largest number is "<<large;
    return 0;
};