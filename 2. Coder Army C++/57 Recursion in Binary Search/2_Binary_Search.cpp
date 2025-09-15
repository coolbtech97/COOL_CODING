// Binary Search

// NOTE IMPORTANT POINTS
//      Not decreasing == ascending order
//      Not increasing == descending order
// *******************************************
#include<iostream>
#include<vector>
using namespace std;
bool found(vector<int> &arr,int target,int start,int end){
    if(start>end)
        return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
        return 1;
    return (arr[mid]<target)?found(arr,target,mid+1,end):found(arr,target,start,mid-1);
    // if(arr[mid]<target)
    //     return found(arr,target,mid+1,end);
    // return found(arr,target,start,mid-1);
}
int main(){
    system("cls");
    vector<int> arr={3,8,11,15,20,22};
    int n=220;
    if(found(arr,n,0,arr.size()-1))
        cout<<"Found";
    else
        cout<<"Not Found";
    return 0;
}