// Fibonacci Series
#include<iostream>
using namespace std;
int fibo(int n){
    if(n<2)return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int f = fibo(n);
    cout<<"Your answer is "<<f<<endl;
    return 0;
}