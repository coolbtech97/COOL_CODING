// PEAK INDEX IN MOUNTAIN ARRAY
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[]={2,4,6,8,10,8,5};
//index        0 1 2 3  4 5 6   // highest index number is *4*=ANS
    int size=sizeof(arr)/sizeof(int);
    int start=0,mid,end=size-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;    // USE   mid=end+(start-end)/2;
                                    // if mid=0 , than it will check arr[mid-1]
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])  //           arr[0-1]
            break;                                      //           arr[-1]  
        else if(arr[mid-1]<arr[mid])                    //    wrong index
            start=mid+1;
        else
            end=mid-1;
    }
    cout<<arr[mid]<<" is highest number with index value "<<mid;
    return 0;
}
// LEETCODE PROBLEM NUMBER 69