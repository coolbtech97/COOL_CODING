// Lower Case to Uppercase
#include<iostream>
using namespace std;
void upper(string &s,int index){
    if(index==s.size())
        return;
    s[index]-=('a'-'A');
    upper(s,index+1);
}
int main(){
    system("cls");
    string s = "rohit";
    upper(s,0);
    cout<<s<<endl;
    return 0;
}