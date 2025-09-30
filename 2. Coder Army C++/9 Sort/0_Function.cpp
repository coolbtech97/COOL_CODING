#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,34,4,3,423,2423,4234,34,3,3,3433,344,567,865,5,65,44,567,545,4,3,2,32,54,6,56};
    int s=sizeof(arr)/sizeof(int);
    system("cls");
    
    // Ascending Sorting
    sort( arr , arr+s );

    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    
    return 0;
};