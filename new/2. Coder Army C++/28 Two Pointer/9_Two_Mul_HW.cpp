// Multiplication of Two Number is 56
// 3,7,8,11,25

// Q
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[]={3,7,8,11,25};
    int s=sizeof(arr)/sizeof(arr[0]);
    int k=56;
    int start=0,end=s-1,mid;
    while(start<end)
    {
        if(arr[start]*arr[end]==k)
            break;
        if(arr[start]*arr[end]<k)
            start++;
        else
            end--;
    }
    if(start==end)
        cout<<"Not Found";
    else
        cout<<"Found: "<<arr[end]<<" * "<<arr[start]<<" = "<<k;
    return 0;
}