#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int avg;
    while(start<=end)
    {
        avg=(start+end)/2;
        if(arr[avg]==target) 
            return avg;
        if(arr[avg]<target) 
            start = avg+1;
        else
            end = avg-1;
    }
    return -1;
}

int main()
{
    int f,array[]={1,2,4,5,7,8,9,11,15,18,20};
    int size=sizeof(array)/sizeof(int);

    cout<<"Enter the number to search ";
    cin>>f;

    int index=binary_search( array , size , f );
    
    if(index==-1)
        cout<<"Not Found";
    else
        cout<<"Found at "<<index+1<<" position";
    return 0;
};