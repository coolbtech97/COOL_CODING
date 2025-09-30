// MISSING NUMBER
// let 6 number
// but array will create of 5 boxex,
// we have to search which number is missing
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,3,4,5,6},sum=0;
    int n=6; // IMPORTANT HERE, total is 6 so, let it be 6
    system("cls");
    int s=(n*(n+1)) /2;
    for(int i=0;i<5;i++)
        sum+=a[i];
    cout<<"The missing number is "<<s-sum;
    return 0;
};