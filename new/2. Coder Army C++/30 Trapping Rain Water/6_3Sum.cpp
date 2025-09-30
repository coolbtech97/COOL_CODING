//  3 SUM
// 1 4 45 6 10 8
// x=13
//              Simple 2 loops and Bindary Search [sorting]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={1,4,45,6,10,8};
    int x=13,s=arr.size(),start,end,mid;

    //sorting 1st to Apply Binary Search
    sort(arr.begin(),arr.end());

    for(int i=0;i<s-2;i++)
        for(int j=i+1;j<s-1;j++)
        {
            start=j+1;
            end=s-1;
            while(start<=end)
            {
                mid=start+(end-start)/2;
                if(arr[i]+arr[j]+arr[mid]==x)
                {
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[mid]<<" = "<<x<<" ";
                    exit(0);
                }
                else if(arr[i]+arr[j]+arr[mid]<x)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
    cout<<"Not Found";
    return 0;
}
// O(n)^2Log(n)