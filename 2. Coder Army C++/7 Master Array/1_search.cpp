// Return the index value at which number found
// if, number not found, return -1
// because -1 is not an index value;;;
#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,7,11,8,4};
    int s,ans=-1;
    system("cls");
    cout<<"Enter the number to search : ";
    cin>>s;

    for(int i=0;i<6;i++)
    {
        if(a[i]==s)
        {
            // cout<<i;
            // return 0;
            ans=i;
            break;
        }
    }
    cout<<ans;
    // OR cout<<i;      because the last value of i was same 
    // just i ned to be initialised at the start of main function
    // but i will NOT able to print -1  ????????
    return 0;
}