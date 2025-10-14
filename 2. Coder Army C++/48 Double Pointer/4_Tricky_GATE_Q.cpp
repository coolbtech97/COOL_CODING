#include<iostream>
using namespace std;
int main(){
    system("cls");
    int *ptr;
    int x=0;
    ptr=&x;
    int y=*ptr;
    *ptr=1;
    cout<<x<<y; // 10
}