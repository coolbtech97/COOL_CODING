//Subsequence in String
#include<iostream>
#include<vector>
using namespace std;
void subset(string arr,int index,int n,vector<string>& ans,string & temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }
    // Not Included
    subset(arr,index+1,n,ans,temp);
    // Included
    temp.push_back(arr[index]);
    subset(arr,index+1,n,ans,temp);
    temp.pop_back(); // Remove last character to backtrack
}
int main(){
    system("cls");
    string s ="abcdqq";
    vector<string> ans;
    string temp;
    // Putting Values
    subset(s,0,s.size(),ans,temp);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}