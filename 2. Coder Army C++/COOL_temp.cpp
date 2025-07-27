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
void print(vector<vector<int>>& arr, int i) {
    if (!i) { // Applying Values
        arr[0][0] = 2;   arr[0][1] = 6;   arr[0][2] = 10;  arr[0][3] = 14;  arr[0][4] = 18;
        arr[1][0] = 20;  arr[1][1] = 24;  arr[1][2] = 27;  arr[1][3] = 29;  arr[1][4] = 38;
        arr[2][0] = 47;  arr[2][1] = 52;  arr[2][2] = 78;  arr[2][3] = 93;  arr[2][4] = 102;
        arr[3][0] = 108; arr[3][1] = 111; arr[3][2] = 200; arr[3][3] = 218; arr[3][4] = 320;
        cout << "Matrix" << endl;
    } else if (i) {
        cout << "\nThe Rotated Matrix-\n";
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] < 10)   // spacing for 1 to 9
                cout << " ";
            if (arr[i][j] < 100)  // spacing for 10 to 99
                cout << " ";
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    system("cls");
    vector<vector<int>> arr(4, vector<int>(5, 0));
    print(arr, 0);
    cout<<(*(arr+1));
    return 0;
}
