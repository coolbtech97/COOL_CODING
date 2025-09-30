// Check if String is rotated by 2 Places
// clockwise and also can be anticlockwise
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("cls");
    string s="ANAND";
    int size=s.size();
    for(int i=1;i<size;i++)
        swap(s[i-1],s[i]);
    for(int i=1;i<size;i++)
        swap(s[i-1],s[i]);
    
    cout<<"Two times rotate is "<<s<<endl;
    return 0;
}