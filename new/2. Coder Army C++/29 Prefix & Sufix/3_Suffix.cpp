// Getting Prefix
#include<iostream>                      // Sum from End
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={6,4,5,-3,2,8};
    int s=arr.size();
    vector<int>v(s);
    
    v[s-1]=arr[s-1];

    for(int i=s-2;i>-1;i--)
        v[i]=arr[i]+v[i+1];
    
    for(int i=0;i<s;i++)
        cout<<v[i]<<" ";
    return 0;
}