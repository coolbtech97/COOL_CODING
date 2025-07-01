#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,55,4,3,4,45,546,46,456,46,344,4,5,5,6,6};
    system("cls");
    int i,j,s,size;
    size=sizeof(a)/sizeof(int);
    for(s=1;s<size;++s)
    {
        for(i=0;i<s;i++)
        {
            while(a[s]<a[i]) swap(a[s],a[i]);
        }
    }
    // Print
    for(i=0;i<size;++i) cout<<a[i]<<" ";
}
// I HAVE TO DO IT IN TWO LOOPS ONLY, for and while