// Longest Prefix Suffix
// A B C D E A B C D
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    system("cls");
    string str="ABCDEABCD";
    int s=str.size();
    int i=0,j=1,count=0,maxi=0;
    while(i<s){
        if(str[i]==str[j])
        {
            count=1;
            int a=i,b=j;
            while(a<s){
                if(str[a++]==str[b++])
                    count++;
                else{
                    maxi=max(maxi,count);
                    break;
                }
            }
        }
        if(j+1==s)
            i++,j=i+1;
        else
            j++;
    }
    cout<<"Max is "<<maxi<<endl;
    return 0;
}