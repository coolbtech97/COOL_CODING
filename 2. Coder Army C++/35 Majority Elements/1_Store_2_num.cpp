// How to Store 2 Number in 1 position
    // number should between 1-99
    // and the final answer should not Overflow
#include<iostream>
using namespace std;
int display(int n)
{
    int x=n/100;
    n%=100;
    for(int i=0;i<x;i++)
        cout<<n<<" ";
    return 0;
}
int store(int& num,int& count)
{
    cout<<"Enter the number to Record : ";
    cin>>num;
    cout<<"Enter how many times to Record that number :";
    cin>>count;
    int n=num+(count*100);
    cout<<"The Recorded Number for "<<num<<", "<<count<<" times is :"<<n<<endl;
    return n;
}
int main()
{
    system("cls");
    int k=1,n,times;
    cout<<"Enter 1 to get displayed\nEnter 0 to Record a Number :";
    cin>>k;
    k=k?display(k):store(n,times);
    if(k)
        cout<<"The stored number is :"<<k<<endl;
    return 0;
}
// IMPORTANT NOTE,--------      ----______-------________--------
//      THIS TOPIC HELPS YOU TO SAVE MEMORY*****************************
//      ***********************************