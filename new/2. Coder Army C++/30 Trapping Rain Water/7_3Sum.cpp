// TWO POINTER........
//  3 SUM
// 1 4 45 6 10 8
// x=13
//              Simple 1 loop and Two Pointer [sorting]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={1,4,45,6,10,8};
    int x=13,s=arr.size(),start,end,f;

    // Sort to Use Two Pointer within loop
    sort(arr.begin(),arr.end());

    for(int i=0;i<s-2;i++)
    {
        start=i+1;
        end=s-1;
        f=x-arr[i];
        if(f<0)continue;
        while(start<end)
        {
            if(arr[start]+arr[end]==f)
            {
                cout<<arr[i]<<" + "<<arr[start]<<" + "<<arr[end]<<" = "<<x<<" ";
                exit(0);
            }
            else if(arr[start]+arr[end]<f)
                start++;
            else
                end--;
        }
    }
    cout<<"Not Found";
    return 0;
}
// O(n)^2