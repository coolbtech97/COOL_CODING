#include<iostream>
using namespace std;
int count(int m)
{
    int count=0;
    while(m)
    {
        count++;
        m/=10;
    }
    return count;
}
int remainder_power(int r,int c)
{
    int X=1;
    for(int i=0;i<c;i++)
        X*=r;
    return X;
}
int main()
{
    int n,c,r,arm,i,sum=0;
    system("cls");
    cout<<"Enter a number : ";
    cin>>n;
    c=count(n);
    arm=n;
    while(n)
    {
        sum+=remainder_power(n%10,c);
        n/=10;
    }
    if(sum==arm) cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}