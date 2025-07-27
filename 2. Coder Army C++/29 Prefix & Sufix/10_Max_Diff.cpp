// Maximum Difference between 2 elements
// 9 5 8 12 2 3 7 4
// Subtract 1st from 2nd    Left Smaller , Right Larger
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int>   arr={9 , 5, 8,12, 2, 3, 7, 4};
//  maximum from last {12,12,12,12, 7, 7, 7, 4}
//  just Compare with them
    int s=arr.size();
    vector<int>maxarr(s,0);
    maxarr[s-1]=arr[s-1];
    for(int i=s-2;i>=0;i--)
        maxarr[i]=max(arr[i],maxarr[i+1]);
    //  got the max Array list

    // for(int i=0;i<s;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;                  //rough Work
    // for(int i=0;i<s;i++)         //Printing Help
    //     cout<<maxarr[i]<<" ";
    // cout<<endl;

    int maxi=INT32_MIN;
    for(int i=0;i<s-1;i++)
        maxi=max(maxi,maxarr[i+1]-arr[i]);
    cout<<"Maximum Difference is \" "<<maxi<<" \""<<endl;
    return 0;
}
//O(n)^1