// Find Two Numbers whose difference is 45
// 5,10,3,2,50,80

// Interview Website
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={5,10,3,2,50,80};
    int k=45;
    int s=arr.size();
    //SORT AND USE TWO POINTERS
    sort(arr.begin(),arr.end());
    int start,end,mid;
    for(int i=0;i<s;i++)
    {
        start=i+1;
        end=s-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]-arr[i]==k)
            {
                cout<<"Found: "<<arr[mid]<<" - "<<arr[i]<<" = "<<k;
                return 1;
            }
            if(arr[mid]-arr[i]<k)
                start=mid+1;
            else
                end=mid-1;
        }
    }
    cout<<"Not Found";
    return 0;
}