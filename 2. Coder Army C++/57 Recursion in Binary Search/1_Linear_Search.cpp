// Linear Search
#include<iostream>
#include<vector>
using namespace std;
int check(vector<int> arr,int target,int index){
    if(arr.size() <= index)
        return -1;
    if(arr[index] == target)
        return index;
    return check(arr,target,index+1);   // Dont Forgot to write fun name while calling
}                                       // Big Mistake Big Mistake
int main(){
    system("cls");
    vector<int> arr={10,20,30,40,50,60,70,80};
    int target=61;
    int index = check(arr,target,0);
    if(index!=-1)
        cout<<"Found at "<<index<<" index";
    else
        cout<<"Not Found";
    return 0;
}