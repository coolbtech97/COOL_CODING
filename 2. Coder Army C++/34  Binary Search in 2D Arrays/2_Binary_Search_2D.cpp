// Binary Search in 2D Array
// ASSUME LIKE A SIMPLE 1D ARRAY,
//      SORT IT
//      THEN, BEGIN Binary Search
//   2   6  10  14  18
//  20  24  27  29  38
//  47  52  78  93 102
// 108 111 200 218 320
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<vector<int>>& arr) {
    { // Applying Values
        arr[0][0] = 2;   arr[0][1] = 6;   arr[0][2] = 10;  arr[0][3] = 14;  arr[0][4] = 18;
        arr[1][0] = 20;  arr[1][1] = 24;  arr[1][2] = 27;  arr[1][3] = 29;  arr[1][4] = 38;
        arr[2][0] = 47;  arr[2][1] = 52;  arr[2][2] = 78;  arr[2][3] = 93;  arr[2][4] = 102;
        arr[3][0] = 108; arr[3][1] = 111; arr[3][2] = 200; arr[3][3] = 218; arr[3][4] = 320;
        cout << "Matrix" << endl;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] < 10)   // spacing for 1 to 9
                cout << " ";
            if (arr[i][j] < 100)  // spacing for 10 to 99
                cout << " ";
            cout << arr[i][j];
            if (arr[i][j] < 1000) // spacing for 100 to 999
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    system("cls");
    vector<vector<int>> arr(4, vector<int>(5, 0));
    print(arr);
    int k = 52;
    // cout << "Enter the number to search : ";
    // cin >> k;
    
    // No need to sort - matrix is already sorted row-wise and column-wise
    // For binary search in a 2D sorted array:
    int rows = arr.size();
    int cols = arr[0].size();
    int start = 0;
    int end = rows * cols - 1;
    int mid, r, c;
    
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        r = mid / cols;
        c = mid % cols;
        if(arr[r][c] == k)
        {
            cout << "Found at position (" << r << "," << c << ")";
            return 1;
        }
        if(arr[r][c] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "Not Found";
    return 0;
}
