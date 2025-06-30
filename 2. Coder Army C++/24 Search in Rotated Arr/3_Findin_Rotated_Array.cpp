// VERY HARD QUESTION                   // leetcode Q.33
// not understand yet, Make Time and learn it
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int k,arr[]={4,5,0,1,2,3};
    system("cls");
    cout<<"Enter the number to find :";
    cin>>k;
    int s=sizeof(arr)/sizeof(int);
    int start=0,end=s-1,mid,ans=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            ans=mid;
            break;
        }

            if(arr[mid]>=k)         // Left Side Array Sorted
            {
                if(arr[start]<=k && k<=arr[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }
            else                    // Right Side Array Sorted
            {
                if(arr[mid]<=k && k<=arr[end])
                    start=mid+1;
                else
                    end=mid-1;
            }
    }
    //done
    if(ans==-1)
        cout<<"Not Found";
    else
        cout<<"Found at "<<ans<<" index";
    return 0;
}