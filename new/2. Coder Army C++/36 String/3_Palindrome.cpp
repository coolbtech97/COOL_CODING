// Check Palindrome For NITIN
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    string s="";
    cout<<"Enter to check Palindrome: ";
    //cin>>s;
    s="NITIN";
    int start=0,end=s.size()-1;
    while(start<end)
    {
        if(s[start]!=s[end]){
        cout<<"Not Palindome";
        return 0;
        }
        start++,end--;
    }
    cout<<"Palindrome";
    return 1;
}