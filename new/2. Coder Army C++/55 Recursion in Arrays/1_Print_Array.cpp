// Print Array
#include<iostream>
using namespace std;
void print(int arr[],int i,int n){
    if(i==n)return;
    cout<<arr[i]<<" ";
    print(arr,i+1,n);
}
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60};
    int n=6;
    print(arr,0,6);
    return 0;
}