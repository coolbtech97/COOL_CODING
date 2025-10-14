// Rotate Matrix by 270 degree  [ Anti Clockwise ]
// Rotate 3 times 90 degress
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
    cout<<"Matrix"<<endl;
    // cout<<"Matrix\n 1  2  3  4\n 5  6  7  8\n 9 10 11 12\n13 14 15 16\n\n";
}
    if(i)
        cout<<"\nThe Rotated Matrix-\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            if(a[i][j]<10)  // spacing for 1 to 9
                cout<<" ";
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    system("cls");
    vector< vector<int>> arr(4,vector<int>(4,0)), ans(4,vector<int>(4,0));
    print(arr,0);
    //Rotate ANTICLOCK WIse
    for(int i=0;i<arr.size();i++)
        for(int j=0;j<arr[0].size();j++)
            ans[3-j][i]=arr[i][j];
    print(ans,1);
}