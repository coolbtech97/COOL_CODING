//  3 SUM
// 1 4 45 6 10 8
// x=13
//                  Simple 3 loops
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={1,4,45,6,10,8};
    int x=13,s=arr.size();
    for(int i=0;i<s-2;i++)
        for(int j=i+1;j<s-1;j++)
            for(int k=j+1;k<s;k++)
                if(arr[i]+arr[j]+arr[k]==x)
                {
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<x<<" ";
                    getch();
                    exit(0);
                }
    cout<<"Not Found";
    getch();
    return 0;
}
// O(n)^3