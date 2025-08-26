// USING KMP Algorithm
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    string str="ABCABDABCABDABDAB";
    int s=str.size();
    vector<int> lps(s,0);
    int pre=0,suf=1;
    while(suf<s){
        if(str[pre]==str[suf]){
            lps[suf]=pre+1;
            pre++,suf++;
        }
        else if(pre!=0)
            pre=lps[pre-1];
        else
            suf++;
    }
    cout<<"LPS = "<<lps[s-1];
    return 0;
}