#include<iostream>
using namespace std;
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int s = 10;
    int r = 5;
    int temp[r];
    for(int i=0;i<r;i++){
        temp[i]=arr[i+s-r];
    }
    for(int i=s-r-1;i>=0;i--){
        arr[i+r]=arr[i];
    }
    for(int i=0;i<r;i++)
        arr[i]=temp[i];


    for(auto x:arr)
        cout<<x<<" ";
}