#include<iostream>
using namespace std;
int main()
{
    system("cls");
    string s="";
    int n=10;
    cin>>n;
    for(int i=2;n>1;)
        {
            if(n%i==0)
            {
                cout<<i<<" ";       //s+=i;
                n/=i;
                continue;
            }
            i++;
        }
}