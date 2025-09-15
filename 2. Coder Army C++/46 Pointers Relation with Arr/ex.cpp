#include<iostream>
using namespace std;
int main(){
    system("cls");
    int arr[]={10,20,30,40,50,60};
    int *ptr = &arr[(sizeof(arr)/sizeof(arr[0]))];
    cout<<*ptr<<endl;
    return 0;
}