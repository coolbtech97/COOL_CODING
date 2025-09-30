#include<iostream>
using namespace std;
int main(){
    system("cls");
    int n=22,i,fact=1;
    cout<<"Enter the number :";
    cin>>n;

    for(i=1;i<=n;i++)
        fact*=i;
    cout<<"Factorial is "<<fact;
    return 0;
}