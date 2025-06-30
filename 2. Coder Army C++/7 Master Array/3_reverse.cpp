// Reverse array , on another array, and copy it back to the 1st array;
#include<iostream>
using namespace std;
int main()
{
    int a[6]={10,20,7,11,8,4},b[6]={0};
    int i=5,j=0;
    system("cls");
    while(i>=0)
    {
        b[j]=a[i];
        j++;
        i--;
    }
    // copying
    for(i=0;i<6;i++)
        a[i]=b[i];
    // printing
    for(i=0;i<6;i++)
        cout<<a[i]<<" ";
    return 0;
}