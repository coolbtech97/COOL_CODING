// Trapping Rain Water
// 4 2 0 5 2 6 2 3
//                                  Q 42
/*
TRICK--------
a= highest pillar on left side
b= highest pillar on right side

n= size of current pillar
n<a && n<b

water stored =  min(a,b) - n
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={4,2,0,5,2,6,2,3};
    int s=arr.size();
    vector<int> premax(s,0),sufmax(s,0);
    //Prefix Max
    premax[0]=arr[0];
    for(int i=1;i<s;i++)
        premax[i]=max(arr[i],premax[i-1]);

    //Suffix Max
    sufmax[s-1]=arr[s-1];
    for(int i=s-2;i>=0;i--)
        sufmax[i]=max(arr[i],sufmax[i+1]);

    // for(int i=0;i<s;i++)    // Print Arr
    
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<s;i++)    // Print Premax
    //     cout<<premax[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<s;i++)    // Print Sufmax
    //     cout<<sufmax[i]<<" ";
    // cout<<endl;

    vector<int> ans(s,0);
    for(int i=1;i<s-1;i++)
        if(arr[i]<premax[i] && arr[i]<sufmax[i])
            ans[i]=min(premax[i],sufmax[i]) - arr[i];  // Subtract the ground height
    int sum=0;
    for(int i=1;i<s-1;i++)
        sum+=ans[i];
    cout<<sum<<endl;
    return 0;
}