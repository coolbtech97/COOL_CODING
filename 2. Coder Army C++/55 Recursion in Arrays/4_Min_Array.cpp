// Minimum is an Array
#include<iostream>
using namespace std;
int mini(int *arr,int index){
    if(!index)return arr[index];
    return min(arr[index],mini(arr,index-1));
}
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int m = mini(arr,n-1);
    cout<<"Minimum element is "<<m<<endl;
    return 0;
}