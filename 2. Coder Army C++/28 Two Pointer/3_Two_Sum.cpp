// Find Two Numbers whose sum is 22
// sorted array
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[]={2,7,11,15,27},c=97;
    //int k=22;
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<s;i++)
        for(int j=i+1;j<s;j++)
            if(arr[i]+arr[j]==22)
                c=0,cout<<arr[i]<<" + "<<arr[j]<<" = 22"<<endl;
    if(c)
        cout<<"Can't find any Two Numbers";
    return 0;
}