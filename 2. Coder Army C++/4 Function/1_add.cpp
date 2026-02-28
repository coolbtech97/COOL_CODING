#include<iostream>
using namespace std;
int add(int x,int y)
{
    return x+y;
}



int main()
{
    int a,b;
    system("cls");
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int total = add(a,b);
    cout<< total;
    return 0;
};