// Find Two Numbers whose difference is 45
// 5,10,3,2,50,80

// Interview Website - Pair With Given Difference
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std;
int main()
{
    system("cls");
    vector<int> arr={5,10,3,2,50,80};
    int k=45;

    //SORT AND USE TWO POINTERS
    sort(arr.begin(),arr.end());
    int start=0,end=1;      //MAIN TRICK
   
    while(end<arr.size())
    {
        if(arr[end]-arr[start]==k)
            break;
        if(arr[end]-arr[start]<k)
            end++;
        else
            start++;
    }

    if(end==arr.size())
        cout<<"Not Found";
    else
        cout<<"Found: "<<arr[end]<<" - "<<arr[start]<<" = "<<k;
    return 0;
}