#include<iostream>
using namespace std;
int main(){
    system("cls");
    char c[]="GATE2024";
    char *p=c;
    cout<<p+p[3]-p[1];  // 2024
}