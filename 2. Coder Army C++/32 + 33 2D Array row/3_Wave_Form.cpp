// print 2D Vector in a Wave Form
// 3 6 4 2
// 7 8 11 5
// 9 3 2 1
// 17 8 5 9
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<vector<int>> arr={
        {3,6,4,2},
        {7,8,11,5},
        {9,3,2,1},
        {17,8,5,9}
    };

    for(int i=0;i<arr.size();i++)       // Print Array
    {
        for(int j=0;j<arr[0].size();j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\nMy Thinking\n";                    // My Thinking
    int row=0,col=0,c=1;
    while(col<arr[0].size())
    {
        cout<<arr[row][col]<<" ";
        if(c)   row++;
        else    row--;
        if(row==arr.size()) c=0,col++,row--;
        else if(row<0)   c=1,col++,row++;
    }

    cout<<"\n\nTeacher Thinking\n";             // Teacher Thinking
    for(int j=0;j<arr[0].size();j++)
    {
        if(j%2==0)      // coln is Even then PRINT DOWNWARD
            for(int i=0;i<arr.size();i++)
                cout<<arr[i][j]<<" ";
        else            // coln is Odd Then PRINT upward
            for(int i=arr.size()-1;i>=0;i--)
                cout<<arr[i][j]<<" ";
    }
}