// Search Elements in Array
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    system("cls");
    int k=7;
    // I need to find k
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(arr[i][j]==k){
                cout<<"Found";
                return 1;
            }
    cout<<"Not FOund";
    return 0;
}