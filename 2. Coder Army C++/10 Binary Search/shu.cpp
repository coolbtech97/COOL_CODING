// 1234567890
// n
//yes / no
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int n;
    cout<<"enter any no";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(n==arr[i])
        {
            cout<<"present";
            return 1;
        }
    }
    cout<<"not found";
}