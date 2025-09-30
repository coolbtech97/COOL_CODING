// Search in sorted row col wise Matrix
// 20 19 16 17
// 16 15 14 13
// 12 11 10  9
//  8  7  6  5
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>>& arr)
{
    //Values in the matrix
    {
        arr[0][0]=20, arr[0][1]=19, arr[0][2]=16, arr[0][3]=17;
        arr[1][0]=16, arr[1][1]=15, arr[1][2]=14, arr[1][3]=13;
        arr[2][0]=12, arr[2][1]=11, arr[2][2]=10, arr[2][3]=9;
        arr[3][0]=8, arr[3][1]=7, arr[3][2]=6, arr[3][3]=5;
    }
    //Printing the matrix
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++) {
            if(arr[i][j] < 10)
                cout<<" ";
            if(arr[i][j] < 100)
                cout<<" ";
            cout<<arr[i][j];
        }
        cout<<"\n\n";
    }
}
int main()
{
    system("cls");
    vector<vector<int>> arr(4,vector<int>(4,0));
    print(arr);
    int target=15;
    int row=arr.size()-1, col=0; // Start from bottom-left corner
    bool found=false;
    while(col < arr[0].size() && row >= 0) {
        if(arr[row][col] == target) {
            found=true;
            break;
        }
        else if(arr[row][col] > target) {
            col++; // Move left
        }
        else {
            row--; // Move down
        }
    }
    if(found) {
        cout<<"Element "<<target<<" found in the matrix.\n";
    } else {
        cout<<"Element "<<target<<" not found in the matrix.\n";
    }
    cout<<endl;
}