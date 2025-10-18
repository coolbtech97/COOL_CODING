#include<iostream>
using namespace std;
int main()
{
    int n;
    system("cls");
    cout<<"Enter your Number : ";
    cin>>n;
    if(n%4==0)
    {
        cout<<"You won"<<endl;
        return 1;
    }
    cout<<"You Lose"<<endl;
    return 0;
}