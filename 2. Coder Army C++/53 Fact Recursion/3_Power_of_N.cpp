// Power of 2^n
#include<iostream>
using namespace std;
int power(int n,int p){
    if(!p)return 1;
    return n*power(n,p-1);
}
int main(){
    system("cls");
    cout<<"Enter the number: ";
    int p,n;
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    int ans = power(n,p);
    cout<<"Your answer is "<<ans<<endl;
    return 0;
}