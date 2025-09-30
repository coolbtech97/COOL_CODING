// sum of diagonal Elements
// 5 8 3 9
// 6 2 8 4
// 5 3 2 2
// 2 8 1 9              // ROW == Coln
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[4][4]={
        {5,8,3,9},
        {6,2,8,4},
        {5,3,2,2},
        {2,8,1,9}
    };
    int sum=0,c=1;
    for(int i=0;i>=0;c?i++:i--)
    {
        sum+=c?arr[i][i]:arr[i][3-i];
        if(i==3)
            c=0;
    }
    // for(int i=0;i<4;i++)
    //     sum+=arr[i][i];
    //     sum+=arr[i][3-i];
    cout<<sum;
    return 0;
}