// Column Major Order
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int arr[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    //Print Array
    cout<<"The Array:\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    //Print Row wise
    cout<<"\nRow Wise:\n";
    for(int i=0;i<4;i++)
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
    
    //Print COlumn wise
    cout<<"\n\nCols Wise:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            cout<<arr[j][i]<<" ";
    return 0;
}