// Check Palindrome
#include<iostream>
using namespace std;
bool pali(string s,int start,int end){
    if(start>=end)return 1;
    if(s[start]!=s[end])
        return 0;
    return (s,start+1,end-1);
}
int main(){
    system("cls");
    string s="";
    cout<<"Enter the string: ";
    getline(cin,s);//cin>>s; WITH SPACE
    bool x = pali(s,0,s.size()-1);
    if(x)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    return 0;
}