#include<iostream>
using namespace std;
// int swap(int a,int b){
//     cout<<a<<"+"<<b<<"= "<<a+b<<endl;
//     return a;
// }
int main()
{
    int i=0,j=1;
    //string s;
    int arr[]={2,4,5,7,6,4,5,3,33,5534,-3,347};
    // Using bubble sort;
    for(;i<sizeof(arr)/sizeof(int);++i)
        for(;j<sizeof(arr)/sizeof(int);++j)
            if(arr[j-1]>arr[j])
                swap(arr[j-1],arr[j]);
    // Print
    for(i=0;i<sizeof(arr)/sizeof(int);++i) cout<<arr[i]<<" ";
}