#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={0},i=0,mid=0,ans=-1;
    system("cls");
    cout<<"Enter the size of Array : "; // ARRAY SIZE
    int s;
    cin>>s;
    for(;i<s;i++)                       // TAKE ELEMENTS
        cin>>arr[i];
    cout<<"Enter the number to find in the Array : ";
    int k;
    cin>>k;
    //BINARY SEARCH APPLY
    int start=0;
    int end=s-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else
            end=mid-1;
    }
    if(ans<0)
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found at "<<mid+1<<" Position";
    }
    return 0;
};