// Sort STRING in O(n)
// **************     **************
#include<iostream>
#include<String>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    system("cls");
    string s="abdkdodjeehfhfxx";
    // cin>>s;
    int len=s.size();
    vector<int> arr(26,0);
    for(int i=0;i<len;i++)
        arr[s[i]-'a']++;
    s="";
    for(int i=0;i<=25;i++)
        for(int j=0;j<arr[i];j++)
            s+=(i+'a');
    cout<<s<<endl;
    return 0;
}