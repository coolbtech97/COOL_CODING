// Circular Pattern Matching
// cdeabroab
// abcde
                /////// NOT WORKING have some error bro
#include<iostream>
using namespace std;
int confirm(string s1,string s2){
    int s=s2.size();
    for(int i=0;i<s;i++)
        if(s1[i]!=s2[i])
            return 0;
    return 1;
}
int main(){
    system("cls");
    string s1="cdeabroab";
    string s2="abcde";
    if(s1.size()<s2.size()) swap(s1,s2);
    int s=s1.size()+1,l=s1.size();
    while(s--){
        for(int i=0;i<l;i++)
            swap(s1[i],s1[i+1]);
        if(confirm(s1,s2)){
            cout<<"Found Matching COOL"<<endl;
            exit(0);
        }
    }
    if(s)
        cout<<"Found Matching"<<endl;
    else
        cout<<"Not Found Matching"<<endl;
    return 0;
}