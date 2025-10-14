// Return the index value at which number found
// if, number not found, return -1
// because -1 is not an index value;;;
#include<iostream>
using namespace std;
int serch(int a[],int x,int limit)
{
    for(int i=0;i<limit;i++)
        if(a[i]==x)
            return i;
    return -1;   
}
int main()
{
    int a[]={10,20,7,11,8,4},s;
    system("cls");
    cout<<"Enter the number to search : ";
    cin>>s;
    cout<<serch(a,s,sizeof(a)/sizeof(a[0]));
    return 0;
}