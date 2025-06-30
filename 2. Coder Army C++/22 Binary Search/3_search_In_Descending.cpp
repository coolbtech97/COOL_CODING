// BINARY SEARCH IN REVERSEED SORTED ARRAY
#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
            return mid+1;
        else if (arr[mid]<key)
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}
int main()
{
    int search,a[]={90,78,56,34,23,21,19,12,9,7,5,4,3,1};
    system("cls");
    int s=sizeof(a)/sizeof(a[0]);
    cout<<"The Descending Sorted Array is"<<endl;
    for(int i=0;i<s;i++)
        cout<<a[i]<<" ";
    cout<<"\n\nEnter the key to search : ";
    cin>>search;
    int index=binary_search(a,s,search);
    if(index<0)
        cout<<"Not Found";
    else
        cout<<"Found at "<<index<<" position";
    return 0;
};