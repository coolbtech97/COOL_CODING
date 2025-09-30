#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<vector<int>> arr={
        {1,2,3},
        {4,5,6,1},
        {7,8,9,2,3},
        {}
    };
    cout<<arr.size();     // Cols = 4
    cout<<" ";
    cout<<arr[0].size();  // 1st row=3
    cout<<" ";
    cout<<arr[1].size();  // 2nd row=4;
    cout<<" ";
    cout<<arr[2].size();  // 3rd row=5;
    cout<<" ";
    cout<<arr[3].size();  // 4th row=0;
}