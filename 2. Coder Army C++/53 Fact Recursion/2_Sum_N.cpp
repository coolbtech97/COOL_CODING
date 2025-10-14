// Factorial
#include<iostream>
using namespace std;
int sume(int n){
    if(n<=1)return 1;
    return n+sume(n-1);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int s=sume(n);
    cout<<"Sum is "<<s;
    return 0;
}