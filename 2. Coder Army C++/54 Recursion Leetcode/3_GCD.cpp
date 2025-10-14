// GCD of 2 Number
// using recursion WOW WOW WOW WOW
#include<iostream>
int gcd(int n1,int n2){
    if(!n2)return n1;
    return gcd(n2,n1%n2);
}
using namespace std;
int main(){
    system("cls");
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"Your answer is "<<ans<<endl;
    return 0;
}