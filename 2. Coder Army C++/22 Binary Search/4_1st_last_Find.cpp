#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;
void find_first_last(int arr[],int size,int c)
{
    int start=0;
    int end=size-1;
    int mid;
    int first=-1 , last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==c)
            {
                first=mid;
                end=mid-1;
            }
        else if(arr[mid]<c)
            start=mid+1;
        else
            end=mid-1;
    }
    start=0 , end=size-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]==c)
            {
                last=mid;
                start=mid+1;
            }
        else if(arr[mid]<c)
            start=mid+1;
        else
            end=mid-1;
    }
    if(first<0)
        cout<<"Not Found";
    else if(first==last)
        cout<<"Found only at "<<1+first<<" position";
    else
        cout<<"First and Last PLaces are"<<endl<<1+first<<" "<<1+last;
    getch();
}
int main()
{
    int key,a[]={1,2,24,5,5,6,5,45,4,4,34,3423,343,4,45,33,44,3};
    system("cls");
    int s=sizeof(a)/sizeof(int);
    sort(a,a+s);
    cout<<"The Sorted Array is"<<endl;
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    cout<<"\n\nEnter the number to search First and Last Place : ";
    cin>>key;
    // BINARY SEARCH
    // int index=
    find_first_last(a,s,key);
    // if(index<0)
    //     cout<<"Not Found";
    // else
    //     cout<<"Found at "<<index<<" number";
    // getch();
    return 0;
}