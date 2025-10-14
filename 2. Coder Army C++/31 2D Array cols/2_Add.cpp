// Add 2 Matrix
// 2 3 4 5     3 4 1 2
// 0 1 2 3     2 2 2 0
// 1 7 6 4     1 3 5 4

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a[3][4]={2,3,4,5,1,2,3,};
    int b[3][4]={3,4,1,2,2,2,2,0,1,3,5,4};
    int c[3][4];
    // ADDING
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            c[i][j]=a[i][j]+b[i][j];
    
    // PRINTING
    for(int i=0;i<3;i++)
    {
                        
        for(int j=0;j<4;j++)
            cout<<a[i][j]<<" ";
        if(i==1)
            cout<<" +  ";
        else
            cout<<"    ";
        for(int j=0;j<4;j++)
            cout<<b[i][j]<<" ";
        if(i==1)
            cout<<" =  ";
        else
            cout<<"    ";
        for(int j=0;j<4;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}