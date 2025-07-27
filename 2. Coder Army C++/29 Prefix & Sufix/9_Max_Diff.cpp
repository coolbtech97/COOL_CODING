// Maximum Difference between 2 elements
// 9 5 8 12 2 3 7 4
// Subtract 1st from 2nd    Left Smaller , Right Larger
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int>arr={9,5,8,12,2,3,7,4};
    int s=arr.size();
    int maxi=INT32_MIN;
    for(int i=0;i<s-1;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            maxi=max(maxi,arr[j]-arr[i]);
        }
    }
    cout<<maxi;
}
//O(n)^2