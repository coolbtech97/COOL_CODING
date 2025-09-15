// Sum of All Elements
#include<iostream>
using namespace std;
int sum(int *arr,int n){
    if(!n)return arr[n];
    return arr[n]+sum(arr,n-1);
}
int main(){
    system("Cls");
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int total=sum(arr,n-1);
    cout<<"Total is "<<total<<endl;
    return 0;
}