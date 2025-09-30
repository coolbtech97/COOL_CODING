// Find Two Numbers whose difference is 45
// 5,10,3,2,50,80

// Interview Website
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    int arr[]={5,10,3,2,50,80};
    int s=sizeof(arr)/sizeof(arr[0]),j,i;
    int k=45;
    
    for(i=0;i<s;i++)
        for(j=i+1;j<s;j++)
            if(arr[j]-arr[i]==k)
                break;
    // BREAK ONLY EXISTS 1 loop

    
    if(i<s)
        cout<<"Found: "<<arr[j]<<" - "<<arr[i]<<" = "<<k;
    else
        cout<<"Not Found";
    return 0;
}