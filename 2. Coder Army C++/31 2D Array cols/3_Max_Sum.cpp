// Print Row Index with Maximum Sum
// 3 4 7 8
// 2 8 3 9
// 5 4 2 2
// 7 3 0 8
// 2 8 9 1
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[5][4]={{3,4,7,8},{2,8,3,9},{5,4,2,2},{7,3,0,8},{2,8,9,1}};
    int s,m=INT16_MIN,row=0;
    for(int i=0;i<5;i++)
    {
        s=0;
        for(int j=0;j<4;j++)
            s+=arr[i][j];
        if(s>m)
            m=s,row=i;
    }
    for(int i=0;i<4;i++){
        if(i)cout<<"+";
        cout<<arr[row][i];
    }
    cout<<" = "<<m;
    return 0;
}