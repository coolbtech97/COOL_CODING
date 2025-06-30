#include<iostream>
using namespace std;
int main()
{
    int a[]={4,5,6,7,8,9};
    system("cls");
    cout<<sizeof(a);
    cout<<endl;
    cout<<sizeof(a)/sizeof(a[0]);
    return 0;
};