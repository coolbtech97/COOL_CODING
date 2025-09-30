// Factorial
#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int f=fact(n);
    cout<<"Factorial of "<<n<<" is "<<f;
    return 0;
}