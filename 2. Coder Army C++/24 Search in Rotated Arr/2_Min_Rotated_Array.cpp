/* ROTATED ARRAY
rotated array was ince binary
ARR[]= 1,2,4,6,8,9
rott   9,1,2,4,6,8
rt2    8,9,1,2,4,6
rt3    6,8,9,1,2,4
rt4    4,6,8,9,1,2  = ROTATED ARRAY
*/
#include<iostream>
using namespace std;
int main()
{
    system("cls");                      // Find the smallest number
    int arr[]={4,6,8,10,1,2};           // 
    int s=sizeof(arr)/sizeof(int);
    int start=0,end=s-1,mid;
    int ans=0; // if Array is sorted than THe code can ERROR
    while(start<=end)   // because arr[0] will always smaller than arr[mid]
    {                   // So mid will always move to RIGHT side, and couldnt
        mid=start+(end-start)/2;        // get any ans=??
        if(arr[0]>arr[mid])             // thatswhy **INT ANS=ARR[0];**
            ans=mid,end=mid-1;          // ans is a index``ans=0;
        else
            start=mid+1;
    }
    cout<<arr[ans];
}
/*
arr[]= 4,6,8,9,1,2
Note: Int ans=arr[0]
note: Always Compare with First Element
note: If arr[mid] is smaller than First Element,
      It can be the answer[ANS],
      OR answer can be at left side, so END=MID-1;
note: ELSE arr[mid] is bigger than First Element,
      than Always Go to right side to search for smaller one,,,
*/
// LEETCODE PROBLEM NUMBER 153