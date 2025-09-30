// Rotate Matrix by 180 degree
// Swap Row Wise + Swap Cols Wise
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
    vector< vector<int>> arr(4,vector<int>(4,0));
    print(arr,0);
    //Swap Row
    int start=0,end=arr.size()-1;
    while(start<end)
    {
        for(int j=0;j<4;j++)
            swap(arr[start][j],arr[end][j]);
        start++,end--;
    }
    // Swap Col
    start=0,end=arr[0].size()-1;
    while(start<end)
    {
        for(int i=0;i<4;i++)
            swap(arr[i][start],arr[i][end]);
        start++,end--;
    }
    print(arr,1);
}