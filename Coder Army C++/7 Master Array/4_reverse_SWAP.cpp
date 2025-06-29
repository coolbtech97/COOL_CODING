// Reverse array , BY SWAPING 1st & Last;
#include<iostream>
using namespace std;
int main()
{
    int a[6]={10,20,7,11,8,4},i=0,j=5;
    system("cls");

    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        --j;
    }
    // Print the new swapped/reversed Array
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
};