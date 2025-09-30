// Search in sorted row col wise Matrix
//  4  8  15  25  60
// 18 22  26  42  80
// 36 40  45  68 104
// 48 50  72  83 130
// 70 99 114 128 170
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<vector<int>>& arr)
{
    //Values in the matrix
    {
        arr[0][0]=4, arr[0][1]=8, arr[0][2]=15, arr[0][3]=25, arr[0][4]=60;
        arr[1][0]=18, arr[1][1]=22, arr[1][2]=26, arr[1][3]=42, arr[1][4]=80;
        arr[2][0]=36, arr[2][1]=40, arr[2][2]=45, arr[2][3]=68, arr[2][4]=104;
        arr[3][0]=48, arr[3][1]=50, arr[3][2]=72, arr[3][3]=83, arr[3][4]=130;
        arr[4][0]=70, arr[4][1]=99, arr[4][2]=114, arr[4][3]=128, arr[4][4]=170;
    }
    //Printing the matrix
    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++) {
            if(arr[i][j] < 10)
                cout<<" ";
            if(arr[i][j] < 100)
                cout<<" ";
            if(arr[i][j] < 1000)
                cout<<" ";
            cout<<arr[i][j];
        }
        cout<<"\n\n";
    }
    cout<<"\n";
}
int main()
{
    system("cls");
    vector<vector<int>> arr(5,vector<int>(5,0));
    print(arr);
    int target=50;
    int row=0, col=arr[0].size()-1; // Start from top-right corner
    bool found=false;
    while(row < arr.size() && col >= 0) {
        if(arr[row][col] == target) {
            found=true;
            break;
        }
        else if(arr[row][col] > target) {
            col--; // Move left
        }
        else {
            row++; // Move down
        }
    }
}