#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end)
    {
        mid =(start+end)/2;  //mid=start+(end-start)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]<target)
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
}

int main()
{
    int f,array[]={1,2,4,5,7,8,9,11,15,18,20};
    int size = sizeof(array)/sizeof(int);

    cout<<"Enter the number to find : ";
    cin>>f;

    int index=binary_search( array , size , f );

    if(index==-1)
        cout<<"Not Found";
    else
        cout<<"Found at "<<index<<" position";
    return 0;
};