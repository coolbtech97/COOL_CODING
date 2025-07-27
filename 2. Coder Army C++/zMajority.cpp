// Majority Party which has more than n/2 votes, find in O(n)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={1,2,3,3,4,5,6,3,3,3,3,6};
    int s=arr.size();
    int majority,count=0;
    for(int i=0;i<s;i++)
    {
        if(!count)
        {
            majority=arr[i];
            count++;
        }
        else if(majority!=arr[i])
            count--;
        else
            count++;
    }
    int count2=0;
    for(int i=0;i<s;i++)
        if(arr[i]==majority)
            count2++;
    if(count2<s/2)
    {
        cout<<"No Majority Element";
        return 0;
    }
    cout<<majority<<" is the majority element by "<<count2;
    return 1;
}