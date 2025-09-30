#include<iostream>
using namespace std;
int add(int u, int v, int w)     // SAME FUNCTION NAME,
{                                // having different pass Values
    return u+v+w;
}
int add(int m, int n)
{
    return m+n;
}
int main()
{
    int a = 1, b = 2, c = 3;
    system("cls");
    cout<< add(a,b);
    cout<<endl;
    cout<< add(a,b,c);
    return 0;
}