#include<iostream>
using namespace std;
int main()
{
    int a[6]={2,7,4,11,5,8};
    system("cls");
    // ROTATE ARRAY BY 1
    int temp=a[5];
    for(int i=5;i>0;--i)
        a[i]=a[i-1];
    a[0]=temp;
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
};