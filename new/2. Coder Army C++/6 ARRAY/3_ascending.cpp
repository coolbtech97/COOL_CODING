#include<iostream>
using namespace std;
// void swap(int &a,int &b)        // PROGRAM can run without this
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
int main()
{
    int a[5],j,i;
    system("cls");
    cout<<"Enter 5 numbers : ";
    for(i=0;i<5;++i)    cin>>a[i];
    for(i=0;i<5;i++)
        for(j=1;j<5;j++)// IMP TRICK HERE
            if(a[j-1]>a[j])
                swap(a[j-1],a[j]);// SWAP IS AN INBUILD FUNCTION IN C
    for(i=0;i<5;++i)    cout<<a[i]<<" ";
    return 0;
}