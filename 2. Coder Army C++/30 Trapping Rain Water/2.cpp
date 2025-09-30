// Trapping Rain Water  asking from the user
//                                  Q 42
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    int s;
    cout<<"Enter the size of arr: ";
    cin>>s;
    vector<int> arr(s),premax(s,0),sufmax(s,0);
    cout<<"Enter "<<s<<" values :";
    for(int i=0;i<s;i++)
        cin>>arr[i];
    
    //Prefix Max
    premax[0]=arr[0];
    for(int i=1;i<s;i++)
        premax[i]=max(arr[i],premax[i-1]);

    //Suffix Max
    sufmax[s-1]=arr[s-1];
    for(int i=s-2;i>=0;i--)
        sufmax[i]=max(arr[i],sufmax[i+1]);

    vector<int> ans(s,0);
    for(int i=1;i<s-1;i++)
        if(arr[i]<premax[i] && arr[i]<sufmax[i])
            ans[i]=min(premax[i],sufmax[i])-arr[i];  // Subtract the ground height
    int sum=0;
    for(int i=1;i<s-1;i++)
        sum+=ans[i];
    cout<<"Total "<<sum<<" unit water can be stored"<<endl;
    return 0;
}