#include<iostream>
using namespace std;
int armstrong(int n)
{
    int arm=n,r,sum=0;
    while(n)
    {
        r=n%10;
        n/=10;
        r=r*r*r;
        sum+=r;
    }
    if(arm==sum)
    return 1;
    return 0;
}
int main()
{
    int n,r,sum=0;
    system("cls");
    for(int i=0;i<440;i++)
        if(armstrong(i))
            cout<<i<<" ";
    return 0;
}