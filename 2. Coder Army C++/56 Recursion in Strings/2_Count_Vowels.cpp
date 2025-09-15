// Count Vowels
#include<iostream>
using namespace std;
bool vowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
int count(string &s,int i){
    if(i==s.size())
        return 0;
    return vowel(s[i])+count(s,i+1);
}
int main(){
    system("cls");
    string s = "rohit";
    cout<<"Enter your String: ";
    getline(cin,s);//cin>>s; to TAKE SPACE
    int v = count(s,0);
    cout<<"Total Numbers of vowels in "<<s<<" is: "<<v<<endl;
    return 0;
}