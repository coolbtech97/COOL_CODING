// Sorting the sentence
// Leetcode Q.                      is2 sentence4 This1 a3
// number will 1-9 only             This is a sentence
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    string str="is2 sentence4 This1 a3",temp="";
    // cin>>str;
    int size=str.size(),t=0;
    vector<string> s(10,"");
    for(int i=0;i<size;i++)
    {
        if(str[i]==' ')
        {
            s[t]=temp;
            t++;
            temp="";
        }
        else
        {
            temp+=str[i];
        }
    }
    str="";
    s[t]=temp;//Last Value putting in
    for(char i='1';i<=t+1+'0';i++)
    {
        if(i!='1')
            str+=' ';
        for(int j=0;j<=t;j++)
        {
            if(s[j][s[j].size()-1]==i)
            {
                str+=s[j];
                str.pop_back();
                break;
            }
        }
    }
    cout<<str;
}