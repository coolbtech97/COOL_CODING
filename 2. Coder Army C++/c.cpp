// Strings Rotations of Each Other
#include<iostream>
#include<string>
using namespace std;
bool rotate(int t,string& s1,string& s2,int s)
    {
        // if(times=4)
        string x="";
        for(int i=0;i<t;i++)
            x+=s1[i];
        for(int i=t;i<s;i++)
            s1[i-t]=s1[i];
        for(int i=s-t;i<s;i++)
            s1[i]=x[i-s+t];
        for(int i=0;i<s;i++)
            if(s1[i]!=s2[i])
                return 0;
        return 1;
    }
bool areRotations(string &s1, string &s2) {
    string temp = s1 + s1;
    if(temp.find(s2) != string::npos)
        return true;
        
    return false;
}
int main()
{system("cls");
    string s1="anand", s2="kumar";
    swap(s1,s2);

    cout<<s1<<" "<<s2;
}