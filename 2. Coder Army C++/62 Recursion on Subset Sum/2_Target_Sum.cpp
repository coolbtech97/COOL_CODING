// Target Sum
#include<iostream>
#include<vector>
using namespace std;
bool find(int *arr,int index,int n,int target){
    if(!target)
        return 1;
    if(index==n || target<0)
        return 0;
    return find(arr,index+1,n,target) || find(arr,index+1,n,target-arr[index]);
}
int main(){
    system("cls");
    int arr[]={2,4,1,8,7};
    int target = 19;
    int check = find(arr,0,sizeof(arr)/sizeof(arr[0]),target);
    if(check)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}
// UNDERSTAND AGAIN TO GET REGULARLY REVISE
// using FOR loop is complex for this
// best thing is to use the recursion