#include<iostream>
using namespace std;
int main()
{
    int n,size,r,arm,i,sum=0,R;
    system("cls");
    cout<<"Enter the number to check armstrong : ";
    cin>>n;
    arm=n;
    for(size=0;n;size++) n/=10;
    n=arm;
    while(n)
    {
        r=n%10;
        n/=10;
        R=1;
        for(i=0;i<size;i++) R*=r;
        sum+=R;
    }
    if(sum==arm) cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}