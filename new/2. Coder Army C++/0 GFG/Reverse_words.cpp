// Word reverse
#include<iostream>
void cls()  {system("cls");}
#include<conio.h>
void over()  {getch();}
#include<string.h>
#include<algorithm>
using namespace std;
string reverse(string &s,int start,int end){
    string ans="";
    int size=s.size();
    while(start<end)
        swap(s[start],s[end]),start++,end--;
    for(int i=0;i<size;i++)
        
    return ans;
}

int main()
{
    cls();
    string ans="",s =" i like this program very much ";
    // output much very program this like i
    int size=s.size(),start=0,end;
    //reverse(s,0,size-1);    //Complete Reverse
    for(int i=0;i<size;i++)
    {
        if(s[i]==' ')
            start=i+1;
        else{
            end=i-1;
            ans+=reverse(s,start,end);
        }
        
    }
    cout<<s;
    cout<<endl;
    cout<<ans;
    over();
}