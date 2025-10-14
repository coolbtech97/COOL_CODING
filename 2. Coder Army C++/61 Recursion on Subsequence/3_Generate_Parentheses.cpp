// Generate Parentheses
//  if n==2
//  ()(), (())

// Leetcode Q. 22
#include<iostream>
#include<vector>
using namespace std;
void parenth(int n,int left,int right,vector<string>& ans,string &temp){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    // Left Parenth
    if(left<n){
        temp.push_back('(');
        parenth(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    // Right Parenth
    if(right<left){
        temp.push_back(')');
        parenth(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
vector<string> generateParentheses(int n){
    vector<string> ans;
    string temp;
    parenth(n,0,0,ans,temp);
    return ans;
}
using namespace std;
int main(){
    system("cls");
    int n=2;
    // cin>>n;
    vector<string> s=generateParentheses(n);
    for(const string& str : s){
        cout << str << endl;
    }
}