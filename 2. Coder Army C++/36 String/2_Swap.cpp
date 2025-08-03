// Swap a String
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    string s="";
    cout<<"Enter a String: ";
    cin>>s;
    int start=0,end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<"The Reverse is "<<s;
}