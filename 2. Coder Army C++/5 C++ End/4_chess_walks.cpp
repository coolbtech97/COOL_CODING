#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
    system("cls");
    cout<<"Enter the row and column : ";
    cin>>r>>c;
    sum+=min(8-r,8-c);
    sum+=min(8-r,c-1);
    sum+=min(r-1,8-c);
    sum+=min(r-1,c-1);
    cout<<sum;
    return 0;
}