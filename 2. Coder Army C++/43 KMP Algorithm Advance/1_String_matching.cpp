// String Matching
#include<iostream>
using namespace std;
int similar(string s1,string s2){
    int l1=s1.size();
    int l2=s2.size();
    if(l1<l2){
        swap(s1,s2);
        swap(l1,l2);
    }
    int i=0,j=0,i2;
    int limit = l1-l2;
    while(i<=limit){
        j=0;
        i2=i;
        while(s1[i2++]==s2[j++]){
            if(j==l2)
                return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    system("cls");
    string s1="onionionson";
    string s2="onions";
    if(s1==s2||similar(s1,s2))
        cout<<"Similarity"<<endl;
    else
        cout<<"No Similarity"<<endl;
    return 0;
}