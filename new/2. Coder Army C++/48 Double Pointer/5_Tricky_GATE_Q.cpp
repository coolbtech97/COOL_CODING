#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a=5,b=10;
    int &name=a;
    int *ptr=&a;
    (*ptr)++;
    ptr=&b;
    *ptr +=5;
    name+=5;
    cout<<a<<b;
}