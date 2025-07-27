// TWO POINTER........
//  4 SUM
// 1 5 1 0 6 0
// x=7
//              Simple 2 loop and Two Pointer [sorting]
#include<iostream>
#include<vector>
#include<conio.h>                       // 1 + 5 + 1 + 0 = 7    without sort, Wrong concept
#include<algorithm>
using namespace std;                    // 0 + 0 + 1 + 6 = 7    By sorting process happened
int main()
{
    system("cls");
    vector<int> arr={1,5,1,0,6,0};
    int k=7,s=arr.size(),f,start,end;

    //Sorting to use 2 pointer concept
    sort(arr.begin(),arr.end());

    for(int i=0;i<s-3;i++)
        for(int j=i+1;j<s-2;j++)
        {
            f=k-arr[i]-arr[j];
            start=j+1;
            end=s-1;
            while(start<end)
                if(arr[start]+arr[end]==f)
                {
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[start]<<" + "<<arr[end]<<" = "<<k<<" ";
                    getch();
                    exit(0);
                }
                else if(arr[start]+arr[end]<f)
                    start++;
                else
                    end--;
        }
    cout<<"Not Found";
    return 0;
}
//O(n)^3