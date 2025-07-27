#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fillvalue(vector<int>& a, int arr[], int s)
{
    int n = 0;
    for(int i = 0; i < a.size(); i++) {
        a[i] = ++n;
        if(i < s)
            arr[i] = n;
    }
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n\n";
}

int main()
{
    // system("cls");
    int arr[20] = {0};
    vector<int> arrV(20, 0);
    fillvalue(arrV, arr, 20); // Pass array size explicitly
    // cout<<*(arr)+50;
}