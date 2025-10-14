#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void insert_at_index(vector<int>& arr,int index, int val){
    int s = arr.size();
    arr.push_back(arr[s-1]);
    while(s>index)
        arr[s--]=arr[s-1];
    arr[index]=val;
}
int main() {
    system("cls");
    vector<int> arr = {1, 2, 3, 4, 5};
    int index = 2;
    int val = 10;

    insert_at_index(arr, index, val);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}