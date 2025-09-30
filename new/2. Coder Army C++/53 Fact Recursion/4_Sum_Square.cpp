// SUM Of Square Of N Number
#include<iostream>
using namespace std;
int sum(int n){
    if(!n)return n;
    return (n*n)+sum(n-1);
}
int main(){
    system("cls");
    cout<<"Enter the value of N: ";
    int n;
    cin>>n;
    int ans=sum(n);
    cout<<"Your answer is "<<ans<<endl;
    return 0;
}