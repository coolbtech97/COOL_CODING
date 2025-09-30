#include<iostream>
using namespace std;
void ispositive(int &i)
{
    if(!i)
    {
        cout<<"0";
        exit(0);
    }
    while(i<0)
    if(i<0)
    {
        cout<<"Enter a positive number :";
        cin>>i;
    }
    else
    return;
}
int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the number : ";
    cin>>n;
    ispositive(n);
    // Got a +ve integer
    int start=0,mid,end=n;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==n)      // USE **mid==n/mid**
            break;          // overflow
        else if(mid*mid<n)  //mid*MID will overflow
            start=mid+1;
        else
            end=mid-1;
    }
    cout<<mid;
    return 0;
}
/*
Digital Electronics : ECT033
Technical Communication : AHT007
Discrete Structure : : CST002 
Data Structure and Algorithms : CST003
OOPS : CST004
Python : CST005
*/