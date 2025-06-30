// #include<iostream>
#include<bits/stdc++.h>
void clr() {system("cls");}
using namespace std;
int main()
{
    clr();
    int arr[]={2,3,3,4,42,42,5},k;
    int size=sizeof(arr)/sizeof(int);
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"Enter the number to find :";
    cin>>k;

    int first=666,last=777,start=0,end=size-1,mid;
    // FIND THE FIRST OCCURENCE
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<k)
            start=mid+1;
        else
            end=mid-1;
    }
    // FIND THE LAST OCCURANCE
    start=0,end=size-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<k)
            start=mid+1;
        else
            end=mid-1;
    }
    cout<<"First and Last Occurance of "<<k<<" is "<<first<<", "<<last;
    return 0;
    
}