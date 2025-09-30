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
    int s=arr.size(),max=arr[0];
    int prefix=0;
    for(int i=1;i<s;i++)
    {
        prefix+=arr[i];
        if(0>prefix)prefix=0;
        if(max<prefix)max=prefix;
    }
    cout<<"Maximum is "<<max;
    return 0;
}
// O(n)
// KADANE's Algorithm