#include<iostream>
using namespace std;
int div(int);
int main()
{
    int num;
    system("cls");
    cout<<"Enter the number : ";
    cin>>num;
    num=div(num);
    cout<<"sum is "<<num;
    if(num<0)
        cout<<endl<<"and its positive value is "<<-1*num;
    return 0;
}
int div(int n)
{
    while(n/10)
    {
        int sum=0,r;
        while(n)
        {
            r=n%10;
            sum+=r;
            n/=10;
        }
        n=sum;
    }
    return n;
}