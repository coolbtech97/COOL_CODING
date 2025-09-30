#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[100]={0,1},n;
    cout<<"Enter the numbers: ";
    cin>>n;
    cout<<endl<<n<<"th fibonacci series is ";
    for(int i=2;i<n;++i)
        arr[i]=arr[i-1]+arr[i-2];
    cout<<arr[n-1]; // -1 because array start with 0, so by decimals i need to put it one decrement
};