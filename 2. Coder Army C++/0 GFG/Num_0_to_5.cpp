#include<iostream>
using namespace std;
int main()
{
    int n=1050;
    system("cls");
    if(!n) return 5;
       int sum=0;
       int r=0,i=1;
       while(n)
       {
           r=n%10;
           if(!r) r=5;
           n/=10;
           sum+=(r*i);
           i*=10;
       }
       cout<<sum;
       return sum;
}