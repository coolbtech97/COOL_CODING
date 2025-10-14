// Majority Elements                            Leetcode Q. 169
// 3 3 2 3 1 3 2 2 1 3 3    N = 11
// Note- MORE than N/2 votes    (>=N/2)
// Trick- do majority and counting
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={3,3,2,3,1,3,2,2,1,3,3};
    int majority,count=0;
    int s=arr.size();
    for(int i=0;i<s;i++)
    {
        if(!count)
        {
            majority=arr[i];
            count++;
        }
        else
        {
            if(arr[i]==majority)
                count++;
            else
                count--;
        }
    }
    if(count<1)
    {
        cout<<"No Majority Element Found";
        return 0;
    }
    int counting=0;
    for(int i=0;i<s;i++)
        if(arr[i]==majority)
            counting++;
    
    if(counting >= (s/2))
        cout<<"Majority Element is "<<majority<<endl;
    else
        cout<<"No Majority Element Found";
    return 1;
}