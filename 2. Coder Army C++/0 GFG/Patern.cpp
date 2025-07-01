#include<iostream>
using namespace std;
int main()
{
    system("cls");
    // PATERN PRINTING
    int N=3;
    cin>>N;
    for(int x=N;x;x--){
    for(int i=N;i;i--)
        for(int j=0;j<x;j++)
            cout<<i<<" ";
    cout<<endl;
    }
}