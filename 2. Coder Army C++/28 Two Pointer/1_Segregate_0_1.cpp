#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {1,0,1,0,1,0};
    // Push all 0 to Left, and 1 to right
    //  Sorting takes n (log n) time;

    // Best Appproach

    int count0=0,count1=0;
    int s=sizeof(arr)/sizeof(int);

    for(int i=0;i<s;i++)
        if(!arr[i])
            count0++;
        else
            count1++;
    
    for(int i=0;i<s;i++)
        if(count0){
            arr[i]=0;
            count0--;
        }
        else
            arr[i]=1;
    

    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    return 0;
}