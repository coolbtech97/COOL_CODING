#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {1,0,1,0,1,0};

    // USING WHILE LOOP
    int s=sizeof(arr)/sizeof(int);

    int start=0,end=s-1;
    while(start<end)
    {
        if(arr[start]==0)
            start++;
        else
        {
            if(arr[end]==0)
                swap(arr[start],arr[end]),
                start++,end--;
            else
                end--;
        }
    }

    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    return 0;
}