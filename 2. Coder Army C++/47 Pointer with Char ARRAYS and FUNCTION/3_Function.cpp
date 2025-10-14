// Pass by Pointer-
#include<iostream>
using namespace std;    // ***************** WOW WOW
void change(int *p){    //  int*p = int p[]
    ++*p;               // ***************** WOW WOW
}
int main(){
    system("cls");
    int num=10;
    cout<<num<<endl;
    change(&num);
    cout<<num<<endl;
    return 0;
}