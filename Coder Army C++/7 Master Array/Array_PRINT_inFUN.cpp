#include<iostream>
using namespace std;
void print(int a[],int s) // IMPORTANT LINE
{                         // HOW TO PASS ARRAY TO FUNCTION
    // cout<<sizeof(a)<<endl;
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
}                         // A[] is a pointer,,,,
int main()
{
    int ar[6]={1,2,3,4,5,6};
    // cout<<sizeof(arr)<<endl;
    print(ar,6);
    return 0;
}