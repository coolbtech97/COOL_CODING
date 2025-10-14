// Largest Sum Contiguous Subarray
// 3,4,-5,8,-12,7,6,-2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={3,4,-5,8,-12,7,6,-2};
    int s=arr.size(),temp;
    int max=arr[0];
    for(int start=0;start<s;start++)
    {
        for(int end=start+1;end<=s;end++)
        {
            temp=0;
            for(int i=start;i<end;i++)
                temp+=arr[i];
            if(max<temp)
                max=temp;
        }
    }
    cout<<"Maximum is "<<max;
    return 0;
}
// O(n)^3