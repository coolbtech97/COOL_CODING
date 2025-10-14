// Find the occurrence of Number
// 3 2 5 3 1 2 3 7
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={3,2,5,3,1,2,3,7};
    int s=arr.size();
    int max=INT16_MIN;
    for(int i=0;i<s;i++)
        if(max<arr[i])
            max=arr[i];
    
    vector<int> count(max,0);
    for(int i=0;i<s;i++)
        count[arr[i]-1]++;
    
}