// Longest Palindrome           Leetcode Q.409
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string swapstr(string /*s2*/s)
{
    // string s=s2;
    int start=0,end=s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main()
{
    system("cls");
    string str="aaaabbb    ac   ccc";
    cin>>str;
    // Only Lower Case::
    int s=str.size();
    vector<int> arr(26,0);

    // Calculating total values
    for(int i=0;i<s;i++)
        if(str[i]>='a' && str[i]<='z')
            arr[str[i]-'a']++;
    str="";
    //Getting Dual Values
    for(int i=0;i<26;i++)
        while(arr[i]>1){
            str+=(i+'a');
            arr[i]-=2;
        }
    string str2=swapstr(str);
    // If any middle single element exist
    for(int i=0;i<26;i++)
        if(arr[i]==1){
            str+=i+'a';
            break;
        }
    str+=str2;
    cout<<"The Longest Palindrome here is ";
    cout<<str<<endl<<"Size: "<<str.size();
}