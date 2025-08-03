// Longest Substring wihtout Repeating Char
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    system("cls");
    string str="abcdecbeadf";
    cout<<"Enter the String: ";
    getline(cin,str);
    int s=str.size(),maxi=1,substring=0;
    if(!s || (s==1) || (s==2 && str[0]!=str[1]))return s;
    if(s==2 && str[0]==str[1])return 1;
    vector<int> index(26), count(26,0);
    count[str[0]-'a']++;
    index[str[0]-'a']=0;
    int start=0,end=1;
    while(end<s)
    {
        if(!count[str[end]-'a']){
            maxi++;
            count[str[end]-'a']++;
            index[str[end]-'a']=end;
        }
        else{
            substring=max(substring,maxi);
            start=index[str[end]-'a']+1;
            maxi=end-start;
        }
        end++;
    }
    cout<<"Maximum Substring is "<<(substring=(substring,maxi))<<endl;
    return 1;
}