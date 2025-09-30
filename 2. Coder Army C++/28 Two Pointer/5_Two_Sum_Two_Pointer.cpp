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
    int start=0,end=arr.size()-1;
    int k=22;
    while(start<=end)
    {
        if(arr[start]+arr[end]==k)
            break;
        if(arr[start]+arr[end]<k)
            start++;
        else
            end--;
    }
    if(start>end)
        cout<<"Not Found";
    else
        cout<<"Found: "<<arr[start]<<" + "<<arr[end]<<" = "<<k;
    return 0;
}