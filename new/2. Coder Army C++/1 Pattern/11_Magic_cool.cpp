#include<iostream>
// n=3
void cls(){system("cls");}
// 3 3 3 2 2 2 1 1 1
// 3 3 2 2 1 1
// 3 2 1
using namespace std;
int main()
{
    cls();
    int n=4;
    int t=n+1;
    while(--t){
    for(int i=n;i;i--)
        for(int j=1;j<=t;j++)
            cout<<i<<" ";
        cout<<endl;
    }
}