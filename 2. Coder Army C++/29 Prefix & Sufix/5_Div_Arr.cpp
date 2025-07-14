// Divide array in 2 Subarray with equal sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    cout<<"Enter the size of Array: ";
    int s;
    cin>>s;
    vector<int> arr(s);//={3,4,-2,5,8,20,-10,8};
    cout<<"Enter the values: ";
    for(int i=0;i<s;i++)
        cin>>arr[i];
    // int s=arr.size();
    int sum=0;
    for(auto i=arr.begin();i!=arr.end();i++)
    {
        sum+=*i;
    }
    // cout<<sum;
    int start=0,end=sum,index=0;
    while(start<end)
    {
        start+=arr[index];
        end-=arr[index];
        index++;
    }
    if(start!=end)// (start*2 != sum)
    {
        cout<<"Not Possible";
        exit(0);
        return 0;
    }
    cout<<"Two sybarrays are:"<<endl;
    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=index;i<s;i++)
        cout<<arr[i]<<" ";
    return 0;
}