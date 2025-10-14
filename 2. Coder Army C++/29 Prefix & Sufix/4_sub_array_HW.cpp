// Subarray is a continuous Part Of Any Array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={1,2,3,4,5,6};
    int s=arr.size(),start,limit;
    for(int i=1;i<=s;i++)
    {
        start=0;
        for(limit=i;limit<=s;limit++)
        {

            
            if(i!=limit)
                cout<<", ";
            for(int a=start;a<limit;a++)
                cout<<arr[a]<<" ";
            start++;
        }
        cout<<endl;
    }
    return 0;
}