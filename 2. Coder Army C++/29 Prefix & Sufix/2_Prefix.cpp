// Getting Prefix
#include<iostream>                  // Sum From Start
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={6,4,5,-3,2,8}, v;
    int s=arr.size();
    
    v.push_back(arr[0]);

    for(int i=1;i<s;i++)
        v.push_back(arr[i]+v[i-1]);
    
    for(int i=0;i<s;i++)
        cout<<v[i]<<" ";
    return 0;
}