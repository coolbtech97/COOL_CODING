#include<iostream>
using namespace std;
int main(){
    system("cls");
    int arr[]={1,2,3,4,5,6};
    int s = 6;

    int temp=arr[s-1];
    for(int i=s-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=temp;



    for(auto x:arr)
        cout<<x<<" ";
}