// Rotate an array by 90 degree right wards
// ANS is 1st transpose the matrix and then Interchange its COlumns
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<vector<int>>& a,int i)
{
    if(!i){
    int n=0;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    a[i][j]=++n;
    cout<<"Matrix\n 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n";
}
    else{
        cout<<"The Rotated Matrix-\n";
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++){
                if(a[i][j]<10)
                    cout<<" ";
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    system("cls");
    vector< vector<int>> arr(4,vector<int>(4,0)), ans(4,vector<int>(4,0));
    print(arr,0);
    //Transpose the matrix 1st
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(i<j)
                swap(arr[i][j],arr[j][i]);
        }
    }
    //Interchange the columns
    int start=0,end=arr[0].size()-1;
    while(start<end)
    {
        for(int i=0;i<arr.size();i++)
            swap(arr[i][start],arr[i][end]);
        start++,end--;
    }
    print(arr,1);
}