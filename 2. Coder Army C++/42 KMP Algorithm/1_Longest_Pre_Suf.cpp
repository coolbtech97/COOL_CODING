// Longest Prefix Suffix
// A B C D E A B C D
#include<iostream>
#include<vector>
// Trick - Write All Prefix , and All suffix, and check the highest size matching equals
#include<string>
using namespace std;
int main()
{
    system("cls");
    string str="ABCDEABCD";
    int s=str.size(),max;
    string first="",last="",temp;
    for(int i=0;i<s;i++){
        first+=str[i];
        temp=str[4-i-1];
        temp+=last;
        last=temp;
        if(first==last)
            max=first.size();
    }
    cout<<max<<endl;
    return 0;
}