// Reverse the words only
#include<iostream>
#include<vector>
// #include<stdlib.h>
using namespace std;
int main(){
    system("cls");
    string str="My name is Anand",temp="";
    getline(cin,str);
    int len = str.size();
    vector<string> s;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' '){
            s.push_back(temp);
            temp="";
        }
        else{
            temp+=str[i];
        }
    }
    s.push_back(temp);// adding last element
    str="";
    for(int i=s.size()-1;i>=0;i--){
        str+=s[i];
        if(i)
            str+=' ';
    }
    cout<<str<<endl;
    return 0;
}