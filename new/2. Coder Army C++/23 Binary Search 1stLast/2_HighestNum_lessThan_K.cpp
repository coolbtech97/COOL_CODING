#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int fun(int k,int size,int arr[])
{
    int start=0,end=size-1,mid,ans=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
            return arr[mid];
        else if(arr[mid]<k)
        {
            ans=arr[mid];
            start=mid+1;
        }
        else
            end=mid-1;
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[]={1,2,3,4,5,6,6,7,8,9,10,11,23,44,45,46,48,50,60,70,88};
    // FIND THE HIGHEST NUMBER LESS THAN "K";
    int k;
    cout<<"Enter the number : ";
    cin>>k;
    int size=sizeof(arr)/sizeof(int);
    sort(arr,arr+size);     // SORT
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    int ans=fun(k,size,arr);
    cout<<"The highest number <= "<<k<<" is "<<ans<<endl;
    getch();
    return 0;
}