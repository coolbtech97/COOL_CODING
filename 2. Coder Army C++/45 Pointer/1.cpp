//Pointers in C++
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int a = 64;
    int *p = &a;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<sizeof(p)<<"\n\n";
    (*p)++;
    cout<<a<<endl;
    return 0;
}