// Pass by Pointer
// SWAPPING
#include<iostream>
using namespace std;
void swap(int*p,int*q){
    // int temp=*p;
    // *p=*q;
    // *q=temp;
    swap(*p,*q);    // Diff Fun [Different PARAMETERS]
}
int main(){
    system("cls");
    int a=1,b=2;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}