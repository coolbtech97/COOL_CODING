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
    int max=arr[0];
    int s=arr.size(),prefix;
    for(int i=0;i<s;i++)
    {
        prefix=0;
        for(int j=i;j<s;j++)
        {
            prefix+=arr[j];
            if(max<prefix)
                max=prefix;
        }
    }
    cout<<"Maximum is "<<max;
    return 0;
}
// O(n)^2