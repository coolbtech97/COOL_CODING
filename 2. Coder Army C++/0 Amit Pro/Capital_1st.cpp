#include<iostream>
using namespace std;
int main()
{
    int i,x = 1;

    string c=" anand  kumar";
    cout<<c;
    for(int i=0;i<c.size();++i)
    {
        if(x&&c[i]!=' ')   
        {
            c[i]+='A'-'a';
            x=0;
        }
        if(c[i]==' ') x=1;
    }
    cout<<endl<<c;

}