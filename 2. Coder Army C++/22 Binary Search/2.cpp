#include<iostream>
#include<algorithm>
using namespace std;
int COOL_BINARYSEARCH(int arr[],int size,int c)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==c)
            return mid+1;
        else if(arr[mid]<c)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}
int main()
{
    int key,a[]={1,2,24,5,5,6,5,45,4,4,34,3423,343,4,45,33,44,3};
    system("cls");
    int s=sizeof(a)/sizeof(int);
    sort(a,a+s);
    cout<<"The Sorted Array is "<<endl;
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    cout<<"\n\nEnter the key to search : ";
    cin>>key;
    // BINARY SEARCH
    int index=COOL_BINARYSEARCH(a,s,key);
    if(index<0)
        cout<<"Not Found";
    else
        cout<<"Found at "<<index<<" number";
    return 0;
}