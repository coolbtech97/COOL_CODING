#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    system("cls");
    cin>>n;
    cout<<fibo(n);
    return 0;
};