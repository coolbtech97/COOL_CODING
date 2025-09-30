// Spiral Form
//  1  2  3  4  5  6
//  7  8  9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30
// 31 32 33 34 35 36
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(6,vector<int>(6,0));
    system("cls");

    {
        //print
        int n=0;
        for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        arr[i][j]=++n;
        cout<<" 1  2  3  4  5  6\n 7  8  9 10 11 12\n13 14 15 16 17 18\n19 20 21 22 23 24\n25 26 27 28 29 30\n31 32 33 34 35 36\n\nSpiral Form\n";
    }
    int rowstart=0,rowend=6;// arr.size()=6
    int colstart=0,colend=6;// arr[0].size()=6
    while(rowstart<rowend && colstart<colend)
    {
        // right
        for(int i=colstart;i<colend;i++)
            cout<<arr[rowstart][i]<<" ";
        rowstart++;
        // down
        for(int i=rowstart;i<rowend;i++)
            cout<<arr[i][colend-1]<<" ";
        colend--;
        // left
        for(int i=colend-1;i>=colstart;i--)
            cout<<arr[rowend-1][i]<<" ";
        rowend--;
        // up
        for(int i=rowend-1;i>=rowstart;i--)
            cout<<arr[i][colstart]<<" ";
        colstart++;
    }
}