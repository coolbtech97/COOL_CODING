// Check if this string PANGRAM - Contains ALL alphabets
#include<iostream>
#include<vector>                // Leetcode Q. 1832
#include<algorithm>
#include<string>
using namespace std;
bool check(string& str)
{
    vector<int> arr(26,0);
    int len=str.size();
    for(int i=0;i<len;i++)
        arr[str[i]-97]++;
    for(int i=0;i<26;i++)
        if(!arr[i])
            return 0;
    return 1;
}
int main()
{
    system("cls");
    string s="the quick brown fox jumps over the lazy dog";
    if(check(s))
        cout<<"PANGRAM";
    else
        cout<<"NOT PANGRAM";
    return 0;
}