#include<iostream>
using namespace std;
int main(){
    system("cls");
    int N=5;
    int i2=1;
    char c,c2;
    for(int i=N;i;i--)
        {
            c='A';
            for(int j=1;j<=i;j++)
            {
                cout<<c;
                c++;  
            }
            for(int j=1;j<i2*2-2;j++)
                cout<<" ";
            c2=c;
            while(c>'A')
            {
                if(c2==c && i==N)
                    c--;
                c--;
                cout<<c;
            }
            cout<<endl;
            i2++;
        }
    return 0;
}