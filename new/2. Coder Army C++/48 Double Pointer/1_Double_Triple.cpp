#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num=97;
    int*p=&num;
    int**q=&p;
    int***r=&q;
    cout<<num<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<***r<<endl;
}