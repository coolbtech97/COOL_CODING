// Make a String Palindrome
// add min char at Start to make it palindrome
#include<iostream>
using namespace std;
int ispali(string s,int i,int j){
    string ans="";
    while(i<=j)
        ans+=s[i++];
    s=ans,i=0,j=s.size()-1;
    while(i<j)
        swap(s[i++],s[j--]);
    return s==ans;
}
int main(){
    system("cls");
    string str="aaaotcaakr";
    string ans="";
    int start=0,end=str.size()-1;
    while(start<end){
        if(!ispali(str,start,end)){
            ans+=str[end];
            end--;
            continue;
        }
        break;
    }
    ans+=str;
    if(ispali(ans,0,ans.size()-1))
        cout<<ans<<endl;    // For Sakee
    return 0;
}