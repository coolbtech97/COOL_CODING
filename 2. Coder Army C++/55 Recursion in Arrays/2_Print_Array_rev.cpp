// Print Array in Reverse
#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<arr[n]<<" ";
    if(!n)return;
    print(arr,n-1);
}
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60};
    int n=6;
    print(arr,6-1);
    return 0;
}