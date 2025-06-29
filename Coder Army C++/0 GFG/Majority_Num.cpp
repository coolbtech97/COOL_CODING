// FIND THE MAJORITY NUMBER IN THE ARRAY
// it means which number is more the N/2 in the array
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {1, 1, 2, 1,1, 3, 5, 1};
    int majority=arr[0];
    int count=1;
    int s=sizeof(arr)/sizeof(int); //REMEMBER TO CHANGE THIS CODE
    
    for(int i=1;i<s;i++)
    {
        if(count == 0)
        {
            majority=arr[i];
            count=1;
        }
        else
            if(arr[i]==majority)
                count++;
            else
                count--;
    }
  
    if(count>0)
        cout<<majority;
    else   
        cout<<"No Majority";
    return 0;
};