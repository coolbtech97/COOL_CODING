// Dynamic Memory Allocation of 1D and 2D Array in C++
// ---------------------------------------------------

// 2D Array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    system("cls");
    // vector<vector<int>> arr(4,vector<int>(4,0));
    // cout<<arr[3][0];

    int **ptr = new int *[4];      /******** IMP IMP *********/
    for(int i=0;i<4;i++)
        ptr[i]=new int[5];
    
    // Created an 2 d Array


    // Value FILL
    for(int i=0;i<4;i++)
        for(int j=0;j<5;j++)
            cin>>ptr[i][j];
}