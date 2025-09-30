// Double Value
// by Pass by Pointer
#include<iostream>
using namespace std;
void dob(int p[]){   // int p[] = int*p
    for(int i=0;i<5;i++)    // ************** WOW WOW
        p[i] *= 2;          // p[i] = *(p+i)
}                           // ************** WOW WOW
int main(){
    system("cls");
    int arr[5]={1,2,3,4,5};
    dob(arr);
    // Print Arr
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}