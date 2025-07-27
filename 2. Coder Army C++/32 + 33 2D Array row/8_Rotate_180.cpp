// Rotate Matrix by 180 degree
// Directly Rotate
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
    //Rotate 180
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            ans[3-i][3-j]=arr[i][j];
        }
    }
    print(ans,1);
}