// Find Two Numbers whose sum is 22
// sorted array
// 2,7,11,15,27 ,,, SUM OF 2 NUMBERS SHOULD BE 22

// LEETCODE 167
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={2,7,11,15,27};
    int k=22;
    int s=arr.size(),start,end,mid,i,c=1;

    for(i=1;c && (i<s);i++)
    {
        start=i+1;
        end=s-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[i]+arr[mid]==k)
            {
                c=0;
                break;
            }
            if(arr[i]+arr[mid]<k)
                start=mid+1;
            else
                end=mid-1;

        }
    }
    if(c)
        cout<<"Not found any two numbers whose sum is "<<k;
    else
        cout<<"Sum of "<<arr[i]<<" + "<<arr[mid]<<" = "<<k;
    return 0;

}