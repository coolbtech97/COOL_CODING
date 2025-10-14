// Defanging an IP address              Leetcode Q 1108
// 255.100.25.60
// 255[.]100[.]25[.]60
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    string s="255.100.25.60",ans="";
    // cout<<"Enter the IP address: ";
    // cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='.')
        {
            // ans.push_back('[');
            // ans.push_back(s[i]);
            // ans.push_back(']');
            ans+="[.]";
        }
        else
        {
            // ans.push_back(s[i]);
            ans+=s[i];
        }
    }
    cout<<ans;
}