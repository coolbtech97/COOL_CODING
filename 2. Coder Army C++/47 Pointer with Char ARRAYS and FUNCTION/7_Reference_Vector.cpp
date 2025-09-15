// Using REFERENCE VARIABLE for Vector
#include<iostream>
#include<vector>
using namespace std;
void pass(vector<int> &v1){
    for(int i=1;i<5;i++)
        v1[i]+=v1[i-1];
}
int main(){
    system("cls");
    vector<int> arr(5,1);   // 1 1 1 1 1
    pass(arr);              // 1 2 3 4 5       Miracle Wow
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}